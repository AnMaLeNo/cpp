/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:16:10 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 19:46:33 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <iostream>
#include <vector>
#include <stack>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> v;

	v.push(1);
	v.push(2);
	v.push(3);

	//MutantStack::iterator it;
	std::cout << v.top()  << std::endl;
	std::cout << *(v.begin() + 1)  << std::endl;
	return (0);
}