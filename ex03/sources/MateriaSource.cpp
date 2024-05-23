/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:55:21 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:55:22 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		this->inventory[i] = 0;
	}
	// std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	// std::cout << "MateriaSource destructor called" << std::endl;	
}

MateriaSource::MateriaSource(const MateriaSource &copy) : IMateriaSource(copy)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		this->inventory[i] = copy.inventory[i];
	}
	// std::cout << "MateriaSource copy constructor called" << std::endl;	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		this->inventory[i] = copy.inventory[i];
	}
	// std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return *this;
}

/* copies the Materia passed as a parameter and store it in memory so it can be cloned
later */
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (!this->inventory[i])
		{
			std::cout << GREEN << "materiasource learnt " << m->getType() << RESET << std::endl;
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << RED << "MateriaSource inventory full" << RESET << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
		{
			std::cout << GREEN << "created " << this->inventory[i]->getType() << \
				" materia from materiasource" << RESET << std::endl;
			return (this->inventory[i]->clone());
		}
	}
	std::cout << RED << "MateriaSource type does not match" << RESET << std::endl;	
	return (NULL);
}