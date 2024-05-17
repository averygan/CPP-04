/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:41:54 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 12:41:55 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *cat = new Cat();
	Animal *dog = new Dog();
	Animal *meta = new Animal();
	WrongAnimal *imposter = new WrongCat();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	for (int i = 0; i < 30; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << imposter->getType() << std::endl;
	imposter->makeSound();

	delete cat;
	delete dog;
	delete meta;
	delete imposter;

	return 0;
}