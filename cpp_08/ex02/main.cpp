/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:16:10 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 02:24:26 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <iostream>
#include <vector>
#include <stack>
#include "MutantStack.hpp"
#include "list"

/* int main(void)
{
	MutantStack<int> v;

	v.push(1);
	v.push(2);
	v.push(3);

	//MutantStack::iterator it;
	std::cout << v.top()  << std::endl;
	std::cout << *(v.begin() + 1)  << std::endl;
	return (0);
} */

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

/* int main()
{
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
	return 0;
} */

// 17
// 1
// 5
// 3
// 5
// 737
// 0