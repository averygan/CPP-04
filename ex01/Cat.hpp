/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:46:25 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 12:46:27 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	// Constructor and destructor
	Cat();
	Cat(const Cat &copy);
	~Cat();

	// Operator overload
	Cat &operator=(const Cat &copy);

	void makeSound();
	std::string getType();
	void memCheck(const Cat &copy);

private:
	Brain *brain;
};

#endif
