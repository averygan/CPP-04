/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:55:41 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:55:42 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria type constructor called" << std::endl;
}


AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;	
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	// std::cout << "AMateria copy constructor called" << std::endl;	
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	this->type = copy.type;
	// std::cout << "AMateria copy assignment operator called" << std::endl;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Abstract Materia used on " << target.getName() << std::endl;
}
