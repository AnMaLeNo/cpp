/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:48:29 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 00:08:13 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

/* int main(void)
{
	std::vector<int> array(3);
	int *i;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	i = easyfind(array, 1);
	if (i != NULL)
	{
		std::cout << *i << std::endl;
		*i = 9;
	}
	std::cout << array[0] << array[1] << array[2] << std::endl;
} */

int main(void)
{
	std::deque<int> array(4, 100);
	int *i;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	i = easyfind(array, 100);
	if (i != NULL)
	{
		std::cout << *i << std::endl;
		*i = 9;
	}
	std::cout << array[0] << array[1] << array[2] << array[3] << std::endl;
}
