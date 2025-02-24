/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:19:49 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 05:25:37 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) {}

AMateria* Ice::clone() const
{
	AMateria* ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "\e[1;34m * shoots an ice bolt at " << target.getName() << " * \e[0m" << std::endl;
}
