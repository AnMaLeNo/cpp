/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:03:13 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:27:20 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria(void) {};

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "\e[1;33m use : " << _type << " one " << target.getName()
	<< " --- (c'est le use de AMateria !!! ) \e[0m" << std::endl;
}
