/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:21:41 by amonot            #+#    #+#             */
/*   Updated: 2025/04/07 19:36:10 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <string>
#include <exception>
#include <iostream>


/* int main(void)
{
	try{
		BitcoinExchange btc("data.csv");

		std::cout << "exchangeRate: "
			<< btc.exchangeRate("2011-02-02") << std::endl;
	} catch (std::exception &e) {
		std::cout << "\e[31m" << e.what() << "\e[0m" << std::endl;
	}

	return (0);
} */

#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12 || day < 1 || year < 1) {
        return false;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return day <= 29;
    }
    return day <= daysInMonth[month];
}
