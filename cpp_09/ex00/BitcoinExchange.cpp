/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:18 by amonot            #+#    #+#             */
/*   Updated: 2025/04/07 18:24:10 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream	data(file.c_str()); //std::ofstream::out
	std::string		tmp;
	size_t			pos;
	
	if (data.is_open())
	{
		while (getline(data, tmp).eof() == 0)
		{
			pos = tmp.find(",");
			_data[tmp.substr(0, pos)] = strtof(tmp.substr(pos + 1).c_str(), NULL);
		}
	}
	else
		throw UnreadableDatabaseException();
}

float BitcoinExchange::exchangeRate(std::string date) // verifier ci la data est valide
{
	std::map<std::string, float>::iterator it = _data.find(date);

	if (_data.size() == 0)
		throw NodatabaseException();
	//std::cout << "demander: " << date << " " << std::endl;
	if (it == _data.end())
	{
		_data[date] = -42;
		return(this->exchangeRate(date));
	}
	else
	{
		if (it->second == -42)
		{
			while (it != _data.begin() && it->second == -42)
				it--;
		}
		if (it->second == -42)
			throw NodataException();
	}
	return (it->second);
}
