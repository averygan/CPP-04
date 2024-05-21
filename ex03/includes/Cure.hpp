/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:05:10 by agan              #+#    #+#             */
/*   Updated: 2024/05/20 22:05:12 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Constructor and destructor
	Cure();
	~Cure();
	Cure(const Cure &copy);
	
	// Overloaded operator
	Cure &operator=(const Cure &copy);

	std::string const & getType() const;
	void use(ICharacter& target);
	Cure *clone() const;
};

#endif
