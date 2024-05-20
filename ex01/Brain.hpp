/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:05:35 by agan              #+#    #+#             */
/*   Updated: 2024/05/17 15:05:36 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>
#include <iomanip>

#define IDEAS_COUNT 2
#define CHECKER_WIDTH 22

/* Brain class - array of 100 std::string ideas */
class Brain
{
private:
	std::string *ideas;

public:
	Brain();
	Brain(const Brain &copy);
	~Brain();

	Brain &operator=(const Brain &copy);
	void printIdeas();
	void brainCheck(const Brain &copy);
};

#endif