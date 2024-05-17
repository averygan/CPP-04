/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:46:22 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 12:46:23 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructor and destructor
	Dog();
	Dog(const Dog &copy);
	~Dog();

	// Operator overload
	Dog &operator=(const Dog &copy);

	// Implementation of pure virtual function
	void makeSound();
	std::string getType();
};

#endif
