/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:18 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 19:21:03 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>

BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ofstream	data(file); //std::ofstream::out
	std::string		tmp;
	
	std::getline(std::cin, tmp);
}