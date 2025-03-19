/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:40 by amonot            #+#    #+#             */
/*   Updated: 2025/03/16 18:35:00 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <string>

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter::~ScalarConverter(void)
{}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

void convertChar(std::string literal)
{
	std::istringstream ss(literal);
	int i;

	ss >> i;
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(i) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << (char)i << std::endl;
}

void convertInt(std::string literal)
{
	std::istringstream ss(literal);
	int i;

	ss >> i;
	std::cout << "int: " << i << std::endl;
}

void convertFloat(std::string literal)
{
	std::istringstream ss(literal);
	float f;

	ss >> f;
	std::cout << "float: " << f << std::endl;
}

void convertDouble(std::string literal)
{
	std::istringstream ss(literal);
	double d;

	ss >> d;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
	convertChar(literal);
	convertInt(literal);
	convertFloat(literal);
	convertDouble(literal);

}