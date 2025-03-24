/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:09:47 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 17:16:57 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) :
	i(42)
{}

Data::Data(const Data* other) :
	i(other->i)
{}

Data::~Data(void)
{}

Data &Data::operator=(const Data& other)
{
	if (this != &other)
	{
		i = other.i;
	}
	return (*this);
}
