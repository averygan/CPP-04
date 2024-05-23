/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:50:37 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 14:50:38 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

// Overloaded operator
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this == &copy)
		return *this;
	this->type = copy.type;
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
	return *this;
}

std::string WrongCat::getType()
{
	return (this->type);
}
