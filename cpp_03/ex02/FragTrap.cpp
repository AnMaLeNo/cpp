/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:48:12 by amonot            #+#    #+#             */
/*   Updated: 2025/02/21 19:04:24 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "\033[32m FragTrap default constructor called \033[0m" <<  std::endl;
	_name = "CL5P-TP";
	_hit = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "\033[32m FragTrap string constructor called \033[0m" <<  std::endl;
	_name = name;
	_hit = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "\033[32m FragTrap Copie constructor called \033[0m" <<  std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[31m FragTrap destructor called \033[0m" <<  std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "\033[35mFragTrap assignment operator. \033[0m" <<  std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_damage = other._damage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[37mFragTrap : high fives ! \033[0m" <<  std::endl;
}
