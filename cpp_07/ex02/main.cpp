/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:29:49 by amonot            #+#    #+#             */
/*   Updated: 2025/04/03 17:29:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> *a = new Array<int>(3);
	Array<int> *b = new Array<int>;

	(*a)[0] = 1;
	(*a)[1] = 2;
	(*a)[2] = 3;
	
	std::cout << (*a)[1] << std::endl;
	*b = *a;
	std::cout << std::endl;
	std::cout << (*a)[1] << std::endl;
	std::cout << (*b)[1] << std::endl;
	(*b)[1] = 42;
	std::cout << std::endl;
	std::cout << (*a)[1] << std::endl;
	std::cout << (*b)[1] << std::endl;
	delete a;
	std::cout << std::endl;
	std::cout << (*b)[1] << std::endl;

	delete b;
	return (0);
}


/* int main(void)
{
	Array<int> *a = new Array<int>(3);
	Array<int> *b = new Array<int>(3);

	*b = *a;

	delete a;
	delete b;

	return (0);
} */

/* class MyClass {
	public:
		MyClass() : value(42) {}
		int value;
}; */

/* int main(void)
{
	int * a = new int();
	Array<std::string> *b = new Array<std::string>(3);
	Array<MyClass> *c = new Array<MyClass>(3);

	*b = 42;
	std::cout << *a << std::endl;
	std::cout << (*b)[0] << std::endl;
	std::cout << (*c)[0].value << std::endl;
	delete a;
	delete b;
}
 */