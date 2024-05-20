/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:37:22 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 15:37:23 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[IDEAS_COUNT];
	for (int i = 0; i < IDEAS_COUNT; i++)
	{
		ideas[i] = "New idea!";
	}
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    this->ideas = new std::string[IDEAS_COUNT];
    for (int i = 0; i < IDEAS_COUNT; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain copy constructor called!" << std::endl;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Brain destructor called!" << std::endl;
}

/* Check for self assignment
Delete current ideas
Dynamically allocate ideas array
Loop through for deep copy of ideas */
Brain &Brain::operator=(const Brain &copy)
{
	if (this == &copy)
		return *this;
	delete[] this->ideas;
    this->ideas = new std::string[IDEAS_COUNT];
    for (int i = 0; i < IDEAS_COUNT; i++)
    {
    	this->ideas[i] = copy.ideas[i];
    }
    // this->brainCheck(copy);
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

/* - Print memory address of first idea
- Loop over ideas and print ideas' content */
void Brain::brainCheck(const Brain &copy)
{
   	std::cout << std::setw(CHECKER_WIDTH) << "address of idea: " << &copy.ideas[0] << std::endl;
	std::cout << std::setw(CHECKER_WIDTH) << "address of new idea: " << &this->ideas[0] << std::endl;
	for (int i = 0; i < IDEAS_COUNT; i++)
	{
		std::cout << this->ideas[i] << " ";
	}
	std::cout << std::endl;
}