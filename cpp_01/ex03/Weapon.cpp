/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:44:18 by amonot            #+#    #+#             */
/*   Updated: 2025/01/21 16:10:44 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Constructeur Weapon" << std::endl;
	this->type = type;
}

// Weapon& Weapon::operator=(const Weapon &other)
// {
// 	if (this != &other)
// 	{
// 		this->type = other.type;
// 	}
// 	return (*this);
// }

Weapon::~Weapon(void)
{
	std::cout << "Destructeur Weapon" << std::endl;
}

std::string Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
