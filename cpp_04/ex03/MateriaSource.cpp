/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:04:22 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 16:07:20 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL; // !!!!!! pas sur que ca marche !!!
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
/* 	for (int i = 0; i < 4; i++)
	{
		if (other._items[i] != NULL)
			_items[i] = other._items[i]->clone();
		else
			_items[i] = NULL;
	} */
	for (int i = 0; i < 4; i++)
		_items[i] = NULL; // !!!!!! pas sur que ca marche !!!
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "\e[1;31m il va faloir free les iteam qui sont dans MateriaSource !  \e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] != NULL)
			delete _items[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if(_items[i] != NULL)
				delete _items[i];
			if (other._items[i] != NULL)
				_items[i] = other._items[i]->clone();
			else
				_items[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] == NULL)
		{
			_items[i] = m;
			std::cout << "\e[1;35m Materia " << m->getType() << " successfully learned \e[0m" << std::endl;
			break ;
		}
		if (i == 3)
			std::cout << "\e[1;33m MateriaSource has no more space to learn Materia " << m->getType() << "\e[0m" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] != NULL)
		{
			if (type == _items[i]->getType())
			{
				std::cout << "\e[1;35m Materia " << type << " successfully created \e[0m" << std::endl;
				return (_items[i]->clone());
			}
		}
		if (i == 3)
			std::cout << "\e[1;33m No materia " << type << " found \e[0m" << std::endl;
	}
	return (0);
}
