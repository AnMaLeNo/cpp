/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:49:33 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:52:04 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "\e[0;32m Default Constructor WrongAnimal \e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "\e[0;32m Copie constructor WrongAnimal \e[0m" << std::endl;
	_type = other._type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\e[0;31m Destructor WrongAnimal \e[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "\e[0;34m WrongAnimal \e[0m" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}