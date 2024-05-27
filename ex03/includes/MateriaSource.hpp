/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:05:28 by agan              #+#    #+#             */
/*   Updated: 2024/05/20 22:05:29 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	// Constructor and destructor
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &copy);
	
	// Overloaded operator
	MateriaSource &operator=(const MateriaSource &copy);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const &type);

private:
	AMateria *inventory[INV_COUNT];
};

#endif
