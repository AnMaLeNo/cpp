/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:48:55 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 16:24:55 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	
	private:
		int bits;
		const int point;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(int nbr);
		Fixed(float nbr);
		~Fixed(void);

		Fixed&	operator=(const Fixed& other);

		bool	operator>(const Fixed& other);
		bool	operator<(const Fixed& other);
		bool	operator>=(const Fixed& other);
		bool	operator<=(const Fixed& other);
		bool	operator==(const Fixed& other);
		bool	operator!=(const Fixed& other);

		Fixed 	operator+(const Fixed& other);
		Fixed 	operator-(const Fixed& other);
		Fixed 	operator*(const Fixed& other);
		Fixed 	operator/(const Fixed& other);

		const Fixed&	operator++();
		const Fixed		operator++(int);
		const Fixed&	operator--();
		const Fixed		operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		const static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);
