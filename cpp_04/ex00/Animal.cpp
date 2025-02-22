/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:08:02 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:31:07 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("animal"), _sound("...")
{
	std::cout << "\e[0;32m Default Constructor Animal \e[0m" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "\e[0;32m Copie constructor Animal \e[0m" << std::endl;
	_type = other._type;
	_sound = other._sound;
}

Animal::~Animal(void)
{
	std::cout << "\e[0;31m Destructor Animal \e[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		_type = other._type;
		_sound = other._sound;
	}
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "\e[0;34m" << _sound << "\e[0m" << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}