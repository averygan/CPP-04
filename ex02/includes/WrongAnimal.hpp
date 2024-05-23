/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:44:50 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 14:44:51 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>
#include <iomanip>

class WrongAnimal
{
public:
	// Constructor and destructor
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	// Operator overload
	WrongAnimal &operator=(const WrongAnimal &copy);

	void makeSound();
	std::string getType();

protected:
	std::string type;
};

#endif