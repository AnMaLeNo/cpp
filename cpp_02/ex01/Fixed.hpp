/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:48:55 by amonot            #+#    #+#             */
/*   Updated: 2025/02/06 20:05:04 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	
	private:
		int nbr;
		const int point;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		~Fixed(void);

		Fixed& operator=(const Fixed& other);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};
