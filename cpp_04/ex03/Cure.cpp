/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:20:15 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:23:16 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {}

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

Cure::Cure(const Cure& other) : AMateria(other.getType()) {}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	return (*this);
}