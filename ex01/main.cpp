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
#include "Brain.hpp"

// Function to test for deep copy
void deepCopy()
{
	Dog doggo;
	Cat catto;

	Dog new_doggo = doggo;
	Cat new_catto = catto;

	std::cout << std::setw(20) << "address of dog: " << &doggo << std::endl;
	std::cout << std::setw(20) << "address of new dog: " << &new_doggo << std::endl;
	std::cout << std::setw(20) << "address of cat: " << &catto << std::endl;
	std::cout << std::setw(20) << "address of new cat: " << &new_catto << std::endl;
}

/* Create an fill an array of Animal objects 
	- Half Cat objects
	- Half Dog objects
End: Loop over array and delete every animal
	Delete dogs and cats as animals */
int main(void)
{
	int n = 4;
	int i = 0;

	Animal *array[n];
	// Creates array of animal objects
	while (i < n / 2)
	{
		array[i] = new Dog();
		i++;
	}
	while (i < n)
	{
		array[i] = new Cat();
		i++;
	}
	deepCopy();
	for (int i = 0; i < n; i++)
	{
		delete(array[i]);
	}
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }