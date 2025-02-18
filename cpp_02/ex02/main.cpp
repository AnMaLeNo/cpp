/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:48:37 by amonot            #+#    #+#             */
/*   Updated: 2025/02/18 16:28:52 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/* int main( void ) {
	Fixed a(10);
	Fixed b(10.003f);
	Fixed c;
	Fixed d;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "a < b : " << (a != b) << std::endl;

	std::cout << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "a + b : " << (a + b) << std::endl;

	std::cout << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "a - b : " << (a - b) << std::endl;

	// incrémentation
	std::cout << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "++c : " << ++c << std::endl;
	std::cout << "c : " << c << std::endl;

	std::cout << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "d++ : " << d++ << std::endl;
	std::cout << "d : " << d << std::endl;

	// décrémentation
	std::cout << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "--c : " << --c << std::endl;
	std::cout << "c : " << c << std::endl;

	std::cout << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "d-- : " << d-- << std::endl;
	std::cout << "d : " << d << std::endl;

	// static fonction
	std::cout << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "Fixed::max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "Fixed::in(a, b) : " << Fixed::min(a, b) << std::endl;
} */

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}