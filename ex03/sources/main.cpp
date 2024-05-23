/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:04:13 by agan              #+#    #+#             */
/*   Updated: 2024/05/20 22:04:14 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/* tester to show that unequipping does not delete AMateria */
void amateria_tester()
{
	AMateria *tmp = new Ice();
	Character *avery = new Character("avery");
	Character *joe = new Character("joe");
	avery->equip(tmp);
	avery->unequip(1);
	avery->unequip(0);
	joe->equip(tmp);
	joe->unequip(0);
	joe->use(0, *avery);
	delete(tmp);
	delete(avery);
	delete(joe);
}

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;
	amateria_tester();
}