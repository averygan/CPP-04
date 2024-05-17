/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:42:11 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 12:42:12 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include "string"
#include "iostream"

class Animal
{
public:
	// Constructor and destructor
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();

	// Operator overload
	Animal &operator=(const Animal &copy);

	// Pure virtual function
	virtual void makeSound();
	virtual std::string getType();

protected:
	std::string type;
};

#endif
