/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:06 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 18:42:44 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Point::Point(void)
{
	//std::cout << "default constructor Point" << std::endl;
}

Point::Point(float x, float y)
{
	//std::cout << "float constructor Point" << std::endl;
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
}

Point::~Point(void)
{
	//std::cout << "Destructeur Point called" << std::endl;
}

// ----- Operator -----

Point& Point::operator=(const Point& other)
{
	//std::cout << "= operator Point called" << std::endl;
	if (this != &other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	return (*this);
}

// ----- Fonction -----

const Fixed& Point::getX(void) const
{
	return (x);
}

const Fixed& Point::getY(void) const
{
	return (y);
}
