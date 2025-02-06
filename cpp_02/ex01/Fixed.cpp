/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:50:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/06 21:00:23 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : point(8)
{
	(void)point;
	nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : point(8)
{
	std::cout << "Copy constructor called" << std::endl;
	nbr = other.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->nbr = other.getRawBits();
	return (*this);
}

std::ostream& Fixed::operator<<(std::ostream& os, const Fixed& other)
{
	float nbr;
	
	nbr = other.getRawBits() >> 8;
	return (os);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}
