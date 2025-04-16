/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:24:30 by amonot            #+#    #+#             */
/*   Updated: 2025/04/16 15:12:15 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <math.h>

/* #include <ctime>
//.......

void wait(double sec, double min, double h)
{

	double secs;
	secs=sec+60.0*min+3600.0*h;

	clock_t delay=secs * CLOCKS_PER_SEC; 
	clock_t start=clock();
	while(clock()-start<delay);  
} */

std::vector<int> *maximum(std::vector<int> &tab)
{
	std::vector<int>	*max = new std::vector<int>;
	int					n;

	for (unsigned i = 0; i + 1 < tab.size(); i += 2)  // variable pour tab.size;
	{
		if (tab[i] > tab[i + 1]) // comp
			max->push_back(tab[i]);
		else
		{
			max->push_back(tab[i + 1]);
			n = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = n;
		}
	}
	return (max);
}

int getPair(const std::vector<int> tab, int n)
{
	for (unsigned i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] == n)
			return (tab[i + 1]);
	}
	std::cout << "\e[34mError in getPair element non trouver: \e[0m" << n << std::endl;
	return (-424242);
}

void printVector(std::vector<int> tab)
{
	std::cout << "=================" << std::endl;
	for (unsigned i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}


void insert(std::vector<int> &tab, unsigned begin, unsigned end, int n)
{
	//std::cout << "begin: " << begin << "end: " << end << "  n: " << n << std::endl;
	//wait(2, 0, 0);
	if (end == begin)
	{
		tab.insert(tab.begin() + begin, n);
	}
	else if (tab[(begin + end) / 2] > n) // comp
		insert(tab, begin, (begin + end) / 2, n);
	else
		insert(tab, (begin + end) / 2 + 1, end, n);
}

unsigned int numStart(int k)
{
	return ((pow(2, k + 1) + pow(-1, k)) / 3);
}

unsigned int search(const std::vector<int> &tab, int nbr)
{
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == nbr)
			return (i);
	}
	std::cout << "\e[34mError in search element non trouver: \e[0m" << nbr << std::endl;
	return (-1);
}

void sort(std::vector<int> &tab)
{
	std::vector<int>	*max;
	int					k;
	unsigned int		t1;
	unsigned int		t2;

	max = maximum(tab);
	//std::cout << "-----------------" << std::endl;
	// for (unsigned i = 0; i < max->size(); i++)
	// 	std::cout << max->at(i) << "  " << tab[i * 2] <<  std::endl;
	if (max->size() != 1)
		sort(*max);
	printVector(*max);
	
	k = 2;
	t1 = 1;
	std::vector<int> maxCp(*max);
	std::cout << "----------" << maxCp.size() << "----------" << std::endl;
	max->insert(max->begin(), getPair(tab, max->at(0)));
	while (t1 <= maxCp.size())
	{
		t2 = numStart(k);
		for (unsigned int j = t2; j > t1; j--)
		{
			if (j > tab.size() - maxCp.size()) // leaving out all bj for j > n/2:
				std::cout << "leaving out j: " << j << std::endl;
			else
			{
				std::cout << "j: " << j << std::endl;
				if (j > tab.size() / 2)
				{
					std::cout << "exception j: " << j << std::endl;
					insert(*max, 0, max->size(), tab.back()); // back ou front ??
				}
				else
					insert(*max, 0, search(*max, maxCp[j-1]), getPair(tab, maxCp[j-1]));
			}
		}
		k++;
		t1 = t2;
	}
	printVector(*max);
	for (unsigned int i = 0; i < tab.size(); i++)
		tab[i] = max->at(i);

	delete max;
}

int main(void)
{
	std::vector<int> tab;

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

	// tab.push_back(1);//
	// tab.push_back(3);
	// tab.push_back(5);//
	// tab.push_back(4);
	// tab.push_back(2);//
	// tab.push_back(6);
	// tab.push_back(7);//

	sort(tab);
/* 	std::cout << numStart(1) << std::endl;
	std::cout << numStart(2) << std::endl;
	std::cout << numStart(3) << std::endl;
	std::cout << numStart(4) << std::endl;
	std::cout << numStart(5) << std::endl;
	std::cout << numStart(6) << std::endl; */
	return (0);
}