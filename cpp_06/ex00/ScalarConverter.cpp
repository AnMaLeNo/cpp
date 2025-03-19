/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:40 by amonot            #+#    #+#             */
/*   Updated: 2025/03/19 18:44:23 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

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

char strType(std::string str)
{
	int i = 0;

	if (!isdigit(str[0]))
	{
		if (str.find("nanf") == 0)
			return ('f');
		else if (str.find("nan") == 0)
			return ('d');
		else if (str.find("-inff") == 0)
			return ('f');
		else if (str.find("+inff") == 0)
			return ('f');
		else if (str.find("-inf") == 0)
			return ('d');
		else if (str.find("+inf") == 0)
			return ('d');
		if (str[0] &&  str[0] == '-' && isdigit(str[1]))
			i++;
		else
			return ('c');
	}
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == '.' && isdigit(str[i + 1]))
	{
		i++;
		while (str[i] && isdigit(str[i]))
			i++;
		if (str[i] != 'f')
			return ('d');
	}
	if (str[i] == 'f')
		return ('f');
	else
		return ('i');
}

/* char toChar(int i)
{

}

char toChar(float i)
{

}

char toChar(double d)
{

} */

void convertChar(char c)
{
	int		i = 0;
	float	f = 0;
	double	d = 0;

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i
				<< "\nfloat: " << f
				<< "\ndouble: " << d << std::endl;
}

void convertInt(int i)
{
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void convertFloat(float f)
{
	if (isnan(f) || isinf(f) || f < 0 || f > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(f))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;

	if (isnan(f) || isinf(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: " << f <<  "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void convertDouble(double d)
{
	if (isnan(d) || isinf(d) || d < 0 || d > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if (isnan(d) || isinf(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	char	type;

	type = strType(str);
	std::cout << "type: " << type << std::endl;
	if (type == 'c')
	{
		convertChar(str[0]);
	}
	else if (type == 'i')
	{
		long int i = std::strtol(str.c_str(), NULL, 10);

		if (i < -2147483648 || i > 2147483647)
			i = 0;
		convertInt(static_cast<int>(i));
	}
	else if (type == 'f')
	{
		convertFloat(std::strtof(str.c_str(), NULL));
	}
	else if (type == 'd')
	{
		convertDouble(std::strtod(str.c_str(), NULL));
	}
}

