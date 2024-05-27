/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:01:23 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 13:01:24 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;	
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
	return *this;
}

std::string Animal::getType()
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "😰: Animal sound..." << std::endl;
}
