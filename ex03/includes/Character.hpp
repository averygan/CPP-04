/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:46:57 by agan              #+#    #+#             */
/*   Updated: 2024/05/21 15:46:57 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include <iostream>
#include <string>

# define INV_COUNT 4

class Character : public ICharacter
{
private:
	AMateria *inventory[INV_COUNT];
	const std::string name;

public:
	// Constructor and destructor
	Character();
	Character(const std::string name);
	~Character();
	Character(const Character &copy);
	
	// Overloaded operator
	Character &operator=(const Character &copy);

	// Functions inherited from ICharacter
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria *getMateria(int idx);

};

#endif