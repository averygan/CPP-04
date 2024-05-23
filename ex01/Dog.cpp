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
	this->brain = new Brain();
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->brain = new Brain(*copy.getBrain());
	// this->memCheck(copy);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	this->type = copy.type;
	this->brain = new Brain();
	*(this->brain) = *(copy.brain);
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

void Dog::memCheck(const Dog &copy)
{
	std::cout << std::setw(CHECKER_WIDTH) << "address of brain: " << &copy.brain << std::endl;
	std::cout << std::setw(CHECKER_WIDTH) << "address of new brain: " << &this->brain << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return this->brain;
}
