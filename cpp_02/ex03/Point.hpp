/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:01 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 18:42:46 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(float x, float y);
		Point(const Point& other);
		~Point(void);

		Point& operator=(const Point& other);

		const Fixed& getX(void) const;
		const Fixed& getY(void) const;

	private:
		Fixed x;
		Fixed y;
};
