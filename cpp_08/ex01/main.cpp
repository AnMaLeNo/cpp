/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:48:27 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 16:15:26 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	Span 				a(1000005);
	std::vector<int>	vector(1000000, 100);
	Span				c;
	
	c = Span(1);
	c.addNumber(1);
	//c.addNumber(1);
	a.addNumber(1);
	a.addNumber(3);
	Span				b(a);
	a.addNumber(20);
	a.addNumber(25);
	a.addNumber(0);
	std::cout << "shortest Span: " << a.shortestSpan() << std::endl;
	std::cout << "longest Span: " << a.longestSpan() << std::endl;
	a.addNumbers(vector.begin(), vector.end());;
	std::cout << "shortest Span: " << a.shortestSpan() << std::endl;
	std::cout << "longest Span: " << a.longestSpan() << std::endl;
	//b.longestSpan();
	a = Span();
	std::cout << b.shortestSpan() << std::endl;
	return(0);
}

/* int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
} */
