/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:39:57 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:39:58 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;	
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	*this = copy;
	// std::cout << "Cure copy constructor called" << std::endl;	
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		this->type = copy.type;	
	return *this;
}

std::string const & Cure::getType() const
{
	return this->type;
}

void Cure::use(ICharacter& target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
	Cure *cloned = new Cure;
	return cloned;
}