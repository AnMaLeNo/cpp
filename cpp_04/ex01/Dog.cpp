/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:36:59 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:57:53 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "\e[0;32m Default Constructor Dog \e[0m" << std::endl;
	_type = "Dog";
	_sound = "Woof Woof";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "\e[0;32m Copie constructor Dog \e[0m" << std::endl;
	_type = other._type;
}

Dog::~Dog(void)
{
	std::cout << "\e[0;31m Destructor Dog \e[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

