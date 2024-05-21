/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:05:06 by agan              #+#    #+#             */
/*   Updated: 2024/05/20 22:05:07 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructor and destructor
	Ice();
	~Ice();
	Ice(const Ice &copy);
	
	// Overloaded operator
	Ice &operator=(const Ice &copy);

	std::string const & getType() const;
	void use(ICharacter& target);
	Ice *clone() const;
};

#endif