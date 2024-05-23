/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:00:15 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 13:00:16 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->brain = new Brain(*copy.getBrain());
	// this->memCheck(copy);
}

// Destructor
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called!" << std::endl;
}

// Overloaded operator
Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	this->type = copy.type;
	this->brain = new Brain();
	*(this->brain) = *(copy.brain);	
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	return *this;
}

void Cat::makeSound()
{
	std::cout << "🐱: Meowww" << std::endl;
}

std::string Cat::getType()
{
	return (this->type);
}

void Cat::memCheck(const Cat &copy)
{
	std::cout << std::setw(CHECKER_WIDTH) << "address of brain: " << &copy.brain << std::endl;
	std::cout << std::setw(CHECKER_WIDTH) << "address of new brain: " << &this->brain << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return this->brain;
}
