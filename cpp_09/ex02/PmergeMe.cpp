/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:25:01 by amonot            #+#    #+#             */
/*   Updated: 2025/04/16 18:27:33 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <iostream>
#include <math.h>
#include <exception>

class NotFindException : public std::exception {
	public:
		const char *what() const throw() {
			return ("error in merge-insert sort");
		} 
};

std::vector<int> *maximum(std::vector<int> &tab)
{
	std::vector<int>	*max = new std::vector<int>;
	int					n;

	for (unsigned i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] > tab[i + 1])
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
	throw NotFindException();
}

void printVector(std::vector<int> tab)
{
	std::cout << "=================" << std::endl;
	for (unsigned i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}


void insert(std::vector<int> &tab, unsigned begin, unsigned end, int n)
{
	if (end == begin)
		tab.insert(tab.begin() + begin, n);
	else if (tab[(begin + end) / 2] > n)
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
	throw NotFindException();
}

void sortVector(std::vector<int> &tab)
{
	std::vector<int>	*max;
	int					k;
	unsigned int		t1;
	unsigned int		t2;

	max = maximum(tab);
	if (max->size() != 1)
		sortVector(*max);
	k = 2;
	t1 = 1;
	std::vector<int> maxCp(*max);
	max->insert(max->begin(), getPair(tab, max->at(0)));
	while (t1 <= maxCp.size())
	{
		t2 = numStart(k);
		for (unsigned int j = t2; j > t1; j--)
		{
			if (j <= tab.size() - maxCp.size()) 
			{
				if (j > tab.size() / 2)
					insert(*max, 0, max->size(), tab.back());
				else
					insert(*max, 0, search(*max, maxCp[j-1]), getPair(tab, maxCp[j-1]));
			}
		}
		k++;
		t1 = t2;
	}
	for (unsigned int i = 0; i < tab.size(); i++)
		tab[i] = max->at(i);

	delete max;
}

std::deque<int> *maximum2(std::deque<int> &tab)
{
	std::deque<int>	*max = new std::deque<int>;
	int					n;

	for (unsigned i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] > tab[i + 1])
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

int getPair2(const std::deque<int> tab, int n)
{
	for (unsigned i = 0; i + 1 < tab.size(); i += 2)
	{
		if (tab[i] == n)
			return (tab[i + 1]);
	}
	std::cout << "\e[34mError in getPair element non trouver: \e[0m" << n << std::endl;
	throw NotFindException();
}

void printDeque(std::deque<int> tab)
{
	std::cout << "=================" << std::endl;
	for (unsigned i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}


void insert2(std::deque<int> &tab, unsigned begin, unsigned end, int n)
{
	if (end == begin)
		tab.insert(tab.begin() + begin, n);
	else if (tab[(begin + end) / 2] > n)
		insert2(tab, begin, (begin + end) / 2, n);
	else
		insert2(tab, (begin + end) / 2 + 1, end, n);
}

unsigned int search2(const std::deque<int> &tab, int nbr)
{
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == nbr)
			return (i);
	}
	std::cout << "\e[34mError in search element non trouver: \e[0m" << nbr << std::endl;
	throw NotFindException();
}

void sortDeque(std::deque<int> &tab)
{
	std::deque<int>	*max;
	int					k;
	unsigned int		t1;
	unsigned int		t2;

	max = maximum2(tab);
	if (max->size() != 1)
		sortDeque(*max);
	
	k = 2;
	t1 = 1;
	std::deque<int> maxCp(*max);
	max->insert(max->begin(), getPair2(tab, max->at(0)));
	while (t1 <= maxCp.size())
	{
		t2 = numStart(k);
		for (unsigned int j = t2; j > t1; j--)
		{
			if (j <= tab.size() - maxCp.size())
			{
				if (j > tab.size() / 2)
					insert2(*max, 0, max->size(), tab.back());
				else
					insert2(*max, 0, search2(*max, maxCp[j-1]), getPair2(tab, maxCp[j-1]));
			}
		}
		k++;
		t1 = t2;
	}
	for (unsigned int i = 0; i < tab.size(); i++)
		tab[i] = max->at(i);
	delete max;
}
