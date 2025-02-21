/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:54:14 by amonot            #+#    #+#             */
/*   Updated: 2025/02/21 18:59:06 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "\033[32m ScavTrap default constructor called \033[0m" <<  std::endl;
	_name = "CL5P-TP";
	_hit = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\033[32m ScavTrap string constructor called \033[0m" <<  std::endl;
	_name = name;
	_hit = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "\033[32m ScavTrap Copie constructor called \033[0m" <<  std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[31m ScavTrap destructor called \033[0m" <<  std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "\033[35mScavTrap assignment operator. \033[0m" <<  std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_damage = other._damage;
	}
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "\033[35mScavTrap is now in Gate keeper mode. \033[0m" <<  std::endl;
}
