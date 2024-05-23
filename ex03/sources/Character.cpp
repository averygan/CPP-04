/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:55:26 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:55:27 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("nameless")
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		this->inventory[i] = 0;
	}
	// std::cout << "Character constructor called" << std::endl;
}

Character::Character(const std::string name) : name(name)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		this->inventory[i] = 0;
	}
	// std::cout << "Character name constructor called" << std::endl;	
}

Character::~Character()
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	// std::cout << "Character destructor called" << std::endl;	
}

Character::Character(const Character &copy) : name(copy.getName())
{
	// this->name = copy.getName();
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
	}
	// std::cout << "Character copy constructor called" << std::endl;	
}

Character &Character::operator=(const Character &copy)
{
	if (this == &copy)
		return *this;
	// std::cout << "Character copy assignment operator called" << std::endl;
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

/* Equip materia in first empty slot
If no empty slots or materia does not exist, don't do anything */
void Character::equip(AMateria* m)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] == 0 && m != NULL)
		{
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INV_COUNT)
	{
		std::cout << RED << "unable to unequip as index is invalid" << RESET << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL)
	{
		std::cout << GREEN << this->name << " unequipped AMateria " \
			<< inventory[idx]->getType() << " from slot " << idx << RESET << std::endl;
		this->inventory[idx] = 0;
	}
	else
		std::cout << RED << this->name << " was unable to unequip as slot " << \
		idx << " is empty" << RESET << std::endl;
}

/* Use materia at slot[idx] */
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INV_COUNT)
	{
		std::cout << RED << "unable to use as index is invalid" << RESET << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL)
	{
		std::cout << GREEN << this->name << " used AMateria " << \
			inventory[idx]->getType() << " at slot " << idx << RESET << std::endl;
		this->inventory[idx]->use(target);
	}
	else
		std::cout << RED << this->name << " was unable to use Amateria as slot " << idx << \
		" is empty" << RESET << std::endl;
}

AMateria *Character::getMateria(int idx)
{
	if (idx < 0 || idx >= INV_COUNT)
	{
		std::cout << RED << "unable to get materia as index is invalid" << RESET << std::endl;
		return 0;
	}
	return this->inventory[idx];
}