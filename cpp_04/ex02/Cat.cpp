/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:37:29 by amonot            #+#    #+#             */
/*   Updated: 2025/02/23 18:43:51 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "\e[0;32m Default Constructor Cat \e[0m" << std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "\e[0;32m Copie constructor Cat \e[0m" << std::endl;
	_type = other._type;
	_brain = new Brain;
	*_brain = *(other._brain);
}

Cat::~Cat(void)
{
	std::cout << "\e[0;31m Destructor Cat \e[0m" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "\e[0;34m Miiiiaaaaaouuuuu \e[0m" << std::endl;
}