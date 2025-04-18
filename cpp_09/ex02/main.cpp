/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:24:30 by amonot            #+#    #+#             */
/*   Updated: 2025/04/18 18:39:43 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <iostream>
#include <math.h>
#include "PmergeMe.hpp"
#include <stdlib.h>
#include <time.h> 

/* int main(void)
{
	std::vector<int> tab;
	std::deque<int> tab2;

	tab.push_back(2);
	tab.push_back(10);
	tab.push_back(9);
	tab.push_back(12);
	tab.push_back(15);
	tab.push_back(5);
	tab.push_back(14);
	tab.push_back(16);
	tab.push_back(4);
	tab.push_back(6);
	tab.push_back(7);
	tab.push_back(8);
	tab.push_back(18);
	tab.push_back(3);
	tab.push_back(17);
	tab.push_back(11);
	tab.push_back(1);
	tab.push_back(13);

	tab2.push_back(2);
	tab2.push_back(10);
	tab2.push_back(9);
	tab2.push_back(12);
	tab2.push_back(15);
	tab2.push_back(5);
	tab2.push_back(14);Before:
	tab2.push_back(16);
	tab2.push_back(4);
	tab2.push_back(6);
	tab2.push_back(7);
	tab2.push_back(8);
	tab2.push_back(18);
	tab2.push_back(3);
	tab2.push_back(17);
	tab2.push_back(11);
	tab2.push_back(1);
	tab2.push_back(13);

	// tab.push_back(1);//
	// tab.push_back(3);
	// tab.push_back(5);//
	// tab.push_back(4);
	// tab.push_back(2);//
	// tab.push_back(6);
	// tab.push_back(7);//

	sortVector(tab);
	printVector(tab);

	sortDeque(tab2);
	printDeque(tab2);
	std::cout << numStart(1) << std::endl;
	std::cout << numStart(2) << std::endl;
	std::cout << numStart(3) << std::endl;
	std::cout << numStart(4) << std::endl;
	std::cout << numStart(5) << std::endl;
	std::cout << numStart(6) << std::endl;
	return (0);
} */

bool check_arg(unsigned argc, char *argv[])
{
	std::vector<int>	nbr;
	char				*tmp;
	for (unsigned int i = 1; i < argc; i++)
	{
		if ((!isdigit(argv[i][0]) && argv[i][0] != '+') || strtod(argv[i], NULL) > 2147483647 || strtod(argv[i], &tmp) < 0 || tmp[0] != '\0')
			return (false);
		nbr.push_back(strtod(argv[i], NULL));
	}
	for (unsigned int i = 0; i < nbr.size(); i++)
	{
		for (unsigned int j = i + 1; j < nbr.size(); j++)
		{
			if (nbr[i] == nbr[j])
				return (false);
		}
	}
	return (true);
}

bool check_sort(std::vector<int> vectorInt)
{
	for (unsigned int i = 0; i + 1 < vectorInt.size(); i++)
	{
		if (vectorInt[i] > vectorInt[i + 1])
			return (false);
	}
	return (true);
}

int main(int argc, char *argv[])
{
	std::vector<int>	vectorInt;
	std::deque<int>		dequeInt;
	clock_t				t;
	double				vt;
	double				dt;


	if (argc == 1 || check_arg(argc, argv) == false)
	{
		std::cout << "the program take positive integer sequence without duplicate" << std::endl;
		return (1);
	}
	std::cout << "Before:\t";
	for (int i = 1; i < argc; i++)
	{
		std::cout << argv[i] << " ";
		vectorInt.push_back(strtod(argv[i], NULL));
		dequeInt.push_back(strtod(argv[i], NULL));
	}
	std::cout << std::endl;
	t = clock();
	sortVector(vectorInt);
	vt = static_cast<double>(clock() - t)/CLOCKS_PER_SEC * 1000;
	t = clock();
	sortDeque(dequeInt);
	dt = static_cast<double>(clock() - t)/CLOCKS_PER_SEC * 1000;

	std::cout << "After:\t";
	for (unsigned int i = 0; i < vectorInt.size(); i++)
		std::cout << vectorInt[i] << " ";
	std::cout << std::endl;
	if (check_sort(vectorInt) == false)
	std::cout << "\e[33mError: not sort \e[0m" << std::endl;

	std::cout << "Time to process a range of " << vectorInt.size()
		<< " elements with std::vector : " << vt << "ms" << std::endl;
	std::cout << "Time to process a range of " << dequeInt.size()
		<< " elements with std::deque : " << dt << "ms" << std::endl;
	
	//std::cout << "global: " << global << std::endl;
}