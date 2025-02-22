/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:49:57 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 03:05:32 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "\e[0;32m Default Constructor WrongCat \e[0m" << std::endl;
	_type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "\e[0;32m Copie constructor WrongCat \e[0m" << std::endl;
	_type = other._type;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\e[0;31m Destructor WrongCat \e[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "\e[0;34m Meow Meow Meow \e[0m" << std::endl;
}