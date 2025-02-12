/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:48:37 by amonot            #+#    #+#             */
/*   Updated: 2025/02/12 16:27:48 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

/* int main(void) {
	Fixed a;
	float nbr;
	
	nbr = 0;
	while ((int)nbr < 1)
	{
		a = Fixed(nbr);
		std::cerr << "a is " << a << " with " << nbr << std::endl;
		nbr += 0.00001;
	}
} */

/* #include <bits/stdc++.h>
void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);

    printf("%d", n & 1);
}

int main(void) {
	Fixed a;
	float nbr;
	
	nbr = 0.00196;
	a = Fixed(nbr);
	std::cout << "a is " << a << " with " << nbr << std::endl;
	bin(a.getRawBits());
	std::cout << std::endl;
} */