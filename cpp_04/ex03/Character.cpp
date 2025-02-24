/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:03:00 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 05:01:27 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(const std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL; // !!!!!! pas sur que ca marche !!!
}

Character::Character(const Character* other)
{
	_name = other->_name;
	for (int i = 0; i < 4; i++)
	{
		if (other->_items[i] != NULL)
			_items[i] = other->_items[i]->clone();
		else
			_items[i] = NULL;
	}
}

Character::~Character(void)
{
	std::cout << "\e[1;34m il va faloir free les iteam et les itema qui on ete l'acher sur le sol !  \e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] != NULL)
			delete _items[i];
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (other._items[i] != NULL)
				_items[i] = other._items[i]->clone();
			else
				_items[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] == NULL)
		{
			_items[i] = m;
			std::cout << "\e[1;35m" << m->getType() << " successfully equipped to " << _name << "\e[0m" << std::endl;
			break ;
		}
		if (i == 3)
			std::cout << "\e[1;33m" << _name << " has no more space to equip " << m->getType() << "\e[0m" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <=3)
	{
		if (_items[idx] != NULL)
			_items[idx] = NULL;
		else
			std::cout << "\e[1;33m No item to unequip at idx : " << idx << " \e[0m" << std::endl;
	}
	else
		std::cout << "\e[1;33m idx is between 0 and 3 \e[0m" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <=3)
	{
		if (_items[idx] != NULL)
			_items[idx]->use(target);
		else
			std::cout << "\e[1;33m No item to use at idx : " << idx << " \e[0m" << std::endl;
	}
	else
		std::cout << "\e[1;33m idx is between 0 and 3 \e[0m" << std::endl;
}
