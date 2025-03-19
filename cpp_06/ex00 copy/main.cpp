/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:17 by amonot            #+#    #+#             */
/*   Updated: 2025/03/17 13:03:34 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
	ScalarConverter test;
	float nb = 42.0f;

	std::cout << "test : " << nb << std::endl;

	if (argc == 2)
		test.convert(argv[1]);
	return (0);
}

