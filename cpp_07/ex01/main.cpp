/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:47:46 by amonot            #+#    #+#             */
/*   Updated: 2025/03/31 16:11:55 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template< typename T >
void increment(T &a)
{
	(void)a;
	//a++;
}

/* int main(void)
{
	int i = 42;
	char c = 'a';

	std::cout << "i: " << i << " c: " << c << std::endl;
	increment(i);
	increment(c);
	std::cout << "i: " << i << " c: " << c << std::endl;
	return (0);
} */

int main(void)
{
	int i[10] = {42, 1};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[2] = {"abc", "123"};
	void (*const operation)(int&) = &increment<int>;

	for (int j = 0; j < 10; j++)
		std::cout << "i[" << i << "]: " << i[j] << std::endl;
	for (int j = 0; j < 5; j++)
		std::cout << "c[" << i << "]: " << c[j] << std::endl;
	iter(i, 10, operation);
	iter(c, 5, &increment<char>);
	//iter(str, 2, &increment<string>);
	for (int j = 0; j < 10; j++)
		std::cout << "i[" << i << "]: " << i[j] << std::endl;
	for (int j = 0; j < 5; j++)
		std::cout << "c[" << i << "]: " << c[j] << std::endl;
	return (0);
}
