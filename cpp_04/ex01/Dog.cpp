/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:36:59 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:14:32 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "\e[0;32m Default Constructor Dog \e[0m" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "\e[0;32m Copie constructor Dog \e[0m" << std::endl;
	_type = other._type;
	_brain = new Brain;
	*_brain = *(other._brain);
}

Dog::~Dog(void)
{
	std::cout << "\e[0;31m Destructor Dog \e[0m" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		_type = other._type;
		*_brain = *other._brain;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "\e[0;34m Woof Woof \e[0m" << std::endl;
}