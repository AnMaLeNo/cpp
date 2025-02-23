/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:38:13 by amonot            #+#    #+#             */
/*   Updated: 2025/02/23 18:39:12 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain(void)
{
	std::cout << "\e[1;32m Default constructor Brain \e[0m" << std::endl;
	_ideas[0] = "antoine";
}

Brain::Brain(const Brain& other)
{
	std::cout << "\e[1;32m Copie constructeur Brain \e[0m" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "\e[1;31m Brain destructor \e[0m" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "\e[1;33m Brain operator= \e[0m" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}
