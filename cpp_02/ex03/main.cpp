/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:48:37 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 18:25:18 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);
int loc(Point const a, Point const b, Point const point);

int main( void ) {
	Point a(2, 2);
	Point b(5, 6);
	Point c(9, 5);

	loc(a, b, c);
	return (0);
}
