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
	// std::cout << "Character name constructor called" << std::endl;	
}

Character::~Character()
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	// std::cout << "Character destructor called" << std::endl;	
}

Character::Character(const Character &copy) : name(copy.getName())
{
	// this->name = copy.getName();
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (copy.inventory[i] != 0)
			this->inventory[i] = copy.inventory[i]->clone();
	}
	// std::cout << "Character copy constructor called" << std::endl;	
}

Character &Character::operator=(const Character &copy)
{
	// std::cout << "Character copy assignment operator called" << std::endl;
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (copy.inventory[i])
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
	if (this->inventory[idx])
		this->inventory[idx] = 0;
}

/* Use materia at slot[idx] */
void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}
