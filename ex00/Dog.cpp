/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:00:19 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 13:00:20 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	return *this;
}

void Dog::makeSound()
{
	std::cout << "🐶: Woooof" << std::endl;
}

std::string Dog::getType()
{
	return (this->type);
}
