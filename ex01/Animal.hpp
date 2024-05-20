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

#include <string>
#include <iostream>
#include <iomanip>

# define BROWN "\033[1;33m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

class Animal
{
public:
	// Constructor and destructor
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();

	// Operator overload
	Animal &operator=(const Animal &copy);

	virtual void makeSound();
	virtual std::string getType();

protected:
	std::string type;
};

#endif
