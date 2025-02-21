/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:05:12 by amonot            #+#    #+#             */
/*   Updated: 2025/02/21 03:20:51 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#define INT32_MIN -2147483646
#define INT32_MAX 2147483647

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _hit(10), _energy(10), _damage(0)
{
	std::cout << "\033[32m Default constructor called \033[0m" <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) 
{
	std::cout << "\033[32m String constructor called \033[0m" <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "\033[32m Copie constructor called \033[0m" <<  std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[31m destructor called \033[0m" <<  std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_damage = other._damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit <= 0)
		std::cout << "\033[33m" << "Not enough hit points to attack" << "\033[0m" << std::endl;
	else if (_energy <= 0)
		std::cout << "\033[33m" << "Not enough energy points to attack" << "\033[0m" << std::endl;
	else
	{
		std::cout << "\033[34m" << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _damage << " points of damage!" << "\033[0m" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit == INT32_MIN)
	{
		std::cout << "\033[33m" << "Not enough hit points to take damage" << "\033[0m" << std::endl;
	}
	else
	{
		if ((unsigned int)((INT32_MIN - _hit) * -1) < amount)
			amount = (unsigned int)((INT32_MIN - _hit) * -1);
		_hit -= amount;
		std::cout << "\033[36m" << amount << " hit point lost. (" << _hit << ")\033[0m" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit == INT32_MAX)
	{
		std::cout << "\033[33m" << "hit points full" << "\033[0m" << std::endl;
	}
	else
	{
		if ((unsigned int)(INT32_MAX - _hit) < amount)
			amount = (unsigned int)(INT32_MAX - _hit);
		_hit += amount;
		std::cout << "\033[38;5;28m" << amount << " hit point repaired (" << _hit << ")\033[0m" << std::endl;
	}
}
