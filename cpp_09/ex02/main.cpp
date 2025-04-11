/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:24:30 by amonot            #+#    #+#             */
/*   Updated: 2025/04/11 01:42:49 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

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

int getY(const std::vector<int> tab, int n)
{
	for (unsigned i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] == n)
			return (tab[i + 1]);
	}
	std::cout << "\e[34mError in getY element non trouver\e[0m" << std::endl;
	return (-424242);
}

void printVector(std::vector<int> tab)
{
	std::cout << "=================" << std::endl;
	for (unsigned i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}



#include <ctime>
//.......

void wait(double sec, double min, double h)
{

    double secs;
    secs=sec+60.0*min+3600.0*h;

    clock_t delay=secs * CLOCKS_PER_SEC; 
    clock_t start=clock();
    while(clock()-start<delay);  
}

void insertV(std::vector<int> &tab, unsigned begin, unsigned end, int n)
{
	std::cout << "begin: " << begin << "end: " << end << std::endl;
	wait(2, 0, 0);
	if (end == begin)
	{
		tab.insert(tab.begin() + begin, n);
	}
	else if (tab[(begin + end) / 2] > n) // comp
		insertV(tab, begin, (begin + end) / 2, n);
	else
		insertV(tab, (begin + end) / 2, end, n);
}

void sort(std::vector<int> &tab)
{
	std::vector<int> *max;

	max = maximum(tab);
	std::cout << "-----------------" << std::endl;
	for (unsigned i = 0; i < max->size(); i++)
		std::cout << max->at(i) << "  " << tab[i * 2] <<  std::endl;
	if (max->size() > 3)
		sort(*max);
	else
	{
		printVector(*max);
		max->insert(max->begin(), getY(tab, max->front()));
		printVector(*max);
		insertV(*max, 0, 2, getY(tab, max->back()));
		printVector(*max);
	}
	
	delete max;
}

int main(void)
{
	std::vector<int> tab;

/* 	tab.push_back(2);
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
	tab.push_back(13); */

	tab.push_back(5);//
	tab.push_back(3);
	tab.push_back(1);//
	tab.push_back(4);
	tab.push_back(2);//
	tab.push_back(6);
	tab.push_back(7);//

	sort(tab);
	return (0);
}