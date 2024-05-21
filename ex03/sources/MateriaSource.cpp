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

/* Copies the Materia passed as a parameter and store it in memory so it can be cloned
later */
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource inventory full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INV_COUNT; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	std::cout << "MateriaSource type does not match" << std::endl;	
	return (NULL);
}