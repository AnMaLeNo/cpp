/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:50:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 14:14:09 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : point(8)
{
	std::cout << "Default constructor called" << std::endl;
	(void)point;
	bits = 0;
}

Fixed::Fixed(const Fixed& other) : point(8)
{
	std::cout << "Copy constructor called" << std::endl;
	bits = other.getRawBits();
}

Fixed::Fixed(int nbr) : point(8)
{
	std::cout << "Int constructor called" << std::endl;
	bits = nbr << 8;
}

Fixed::Fixed(float nbr) : point(8)
{
	std::cout << "Float constructor called" << std::endl;
	bits = (int)nbr << 8;
	bits += (nbr - (bits >> 8)) * 256 + 0.5; //?????
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->bits = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->bits);
}

void Fixed::setRawBits(int const raw)
{
	this->bits = raw;
}

float Fixed::toFloat(void) const
{
	float nbr;

	nbr = bits >> 8;
	nbr += (float)(bits - ((int)nbr << 8)) / 256;
	return (nbr);
}

int Fixed::toInt(void) const
{
	if (bits < 0)
		return (((bits * -1) >> 8) * -1);
	return (bits >> 8);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}
