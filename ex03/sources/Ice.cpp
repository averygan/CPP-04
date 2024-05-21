/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:40:02 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:40:02 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;	
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	*this = copy;
	// std::cout << "Ice copy constructor called" << std::endl;	
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string const & Ice::getType() const
{
	return this->type;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
	Ice *cloned = new Ice;
	return cloned;
}