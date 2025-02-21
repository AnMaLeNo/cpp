/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:50:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/20 14:30:11 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// ----- Constructor -----

Fixed::Fixed(void) : point(8)
{
	//std::cout << "Default constructor called" << std::endl;
	(void)point;
	bits = 0;
}

Fixed::Fixed(const Fixed& other) : point(8)
{
	//std::cout << "Copy constructor called" << std::endl;
	bits = other.getRawBits();
}

Fixed::Fixed(int nbr) : point(8)
{
	//std::cout << "Int constructor called" << std::endl;
	bits = nbr << 8;
}

Fixed::Fixed(float nbr) : point(8)
{
	//std::cout << "Float constructor called" << std::endl;
	bits = (int)nbr << 8;
	bits += roundf((nbr - (bits >> 8)) * 256);
}

// ----- Destructeur -----

Fixed::~Fixed(void)
{
	//std::cout << "Destructeur called" << std::endl;
}

// ----- Operator -----

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->bits = other.getRawBits();
	return (*this);
}

// comparaison

bool Fixed::operator>(const Fixed& other)
{
	return (this->bits > other.bits);
}

bool Fixed::operator<(const Fixed& other)
{
	return (this->bits < other.bits);
}

bool Fixed::operator>=(const Fixed& other)
{
	return (this->bits >= other.bits);
}

bool Fixed::operator<=(const Fixed& other)
{
	return (this->bits <= other.bits);
}

bool Fixed::operator==(const Fixed& other)
{
	return (this->bits == other.bits);
}

bool Fixed::operator!=(const Fixed& other)
{
	return (this->bits != other.bits);
}

// arithmétiques

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed r;
	
	r.setRawBits(this->bits + other.bits);
	return (r);
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed r;
	
	r.setRawBits(this->bits - other.bits);
	return (r);
}

Fixed Fixed::operator*(const Fixed& other)
{	
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// incrémentation

const Fixed& Fixed::operator++()
{
	++bits;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

// décrémentation

const Fixed& Fixed::operator--()
{
	--bits;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

// ----- Fonction -----

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

// ----- static -----

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.bits < b.bits)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.bits > b.bits)
		return (a);
	return (b);
}

// ----- ??? -----

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}
