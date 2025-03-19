/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:17 by amonot            #+#    #+#             */
/*   Updated: 2025/03/19 13:41:22 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[])
{
	ScalarConverter test;

	if (argc == 2)
		test.convert(argv[1]);
	return (0);
} 

// int main(void)
// {
// 	std::istringstream ss("42.01f");
// 	float nbr;
// 	int n;
// 	std::string str;

// 	ss >> nbr;
// 	ss >> str;
// 	std::cout  << "nbr: " << nbr << std::endl;
// 	std::cout << "ss: " << str << std::endl;
// }

/* int main ()
{
  char str[] = "nanf 365.24";
  char* pEnd;
  float f1;
  double d1;
  int i1;

  f1 = strtof(str, &pEnd);
  std::cout << "float: " << f1 << " pEnd: $" << pEnd << "$" << std::endl;
  d1 = strtod(str, &pEnd);
  std::cout << "double: " << d1 << " pEnd: $" << pEnd << "$" << std::endl;
  i1 = strtod(str, &pEnd);
  std::cout << "int: " << i1 << " pEnd: $" << pEnd << "$" << std::endl;
  return 0;
} */

/* int main(void)
{
	std::string str = "dnan test";

	std::cout << str.find("nan") << std::endl;
	std::cout << std::string::npos << std::endl;
	return (0);
} */
