/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:20:15 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 04:25:39 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("Cure") {}

Cure::~Cure(void) {}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "\e[1;34m * heals " << target.getName() << " s wounds * \e[0m" << std::endl; // "’" !!!!!!
}
