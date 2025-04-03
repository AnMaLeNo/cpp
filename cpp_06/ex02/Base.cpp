/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:51:58 by amonot            #+#    #+#             */
/*   Updated: 2025/04/03 14:52:54 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

Base::~Base(void)
{}

Base * Base::generate(void)
{
	int i = rand() % 3;

	if (i == 0)
		return (new A());
	if (i == 1)
		return (new B());
	return (new C());
}

void Base::identify(Base* p)
{
	std::cout << "avec *:" << std::endl;
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "object of type A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "object of type B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "object of type C" << std::endl;
	else
		std::cout << "object of type unknown" << std::endl;
}

void Base::identify(Base& p)
{

	std::cout << "avec &:" << std::endl;
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "object of type A" << std::endl;
	} catch (...) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "object of type B" << std::endl;
		} catch (...) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "object of type C" << std::endl;
			} catch (...) {
				std::cout << "object of type unknown" << std::endl;
			}
		}
	}
}
