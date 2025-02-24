/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:20:15 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 05:25:43 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("Cure") {}

Cure::~Cure(void) {}

AMateria* Cure::clone() const
{
	AMateria* cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "\e[1;34m * heals " << target.getName() << " s wounds * \e[0m" << std::endl; // "’" !!!!!!
}
