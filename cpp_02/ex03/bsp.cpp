/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:52:41 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 18:41:54 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int loc(Point const a, Point const b, Point const point)
{
	Fixed m;
	(void)point;

	m = (a.getY() - b.getY()) / (a.getX() - b.getX());
	std::cout << m << std::endl;
	return (12);
}

/* bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	
} */
