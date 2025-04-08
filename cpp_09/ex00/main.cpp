/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:21:41 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 02:07:20 by amonot           ###   ########.fr       */
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

/* 		std::cout << "exchangeRate: "
			<< btc.exchangeRate("2013-03-06") << std::endl; */
        btc.BtcValueByRate("input.txt");
	} catch (std::exception &e) {
		std::cout << "\e[31m" << e.what() << "\e[0m" << std::endl;
	}

	return (0);
}

