/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:21:41 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 14:24:21 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <string>
#include <exception>
#include <iostream>


int main(void)
{
	try{
		BitcoinExchange btc("data.csv");
        btc.BtcValueByRate("input.txt");
	} catch (std::exception &e) {
		std::cout << "\e[31m" << e.what() << "\e[0m" << std::endl;
	}

	return (0);
}

