/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:44:41 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 14:44:44 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	// Constructor and destructor
	WrongCat();
	WrongCat(const WrongCat &copy);
	~WrongCat();

	// Operator overload
	WrongCat &operator=(const WrongCat &copy);

	std::string getType();
	void makeSound();
};

#endif
