/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:18 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 17:22:13 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iostream>

BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream	data(file.c_str()); //std::ofstream::out
	std::string		line;
	size_t			pos;
	
	if (!data.is_open())
		throw UnreadableDatabaseException();
	while (getline(data, line).eof() == 0)
	{
		pos = line.find(",");
		_data[line.substr(0, pos)] = strtof(line.substr(pos + 1).c_str(), NULL);
	}
}

BitcoinExchange::~BitcoinExchange(void)
{}

float BitcoinExchange::exchangeRate(std::string date) // verifier ci la data est valide
{
	std::map<std::string, float>::iterator it = _data.find(date);

	if (_data.size() == 0)
		throw NodatabaseException();
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

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(std::string date) { // on peux remplaser le 0 par un char !! faux
	int year = atoi(date.substr(0, date.find("-")).c_str());
	int month = atoi(date.substr(date.find("-") + 1, date.rfind("-")).c_str());
	int day = atoi(date.substr(date.rfind("-") + 1).c_str());

    if (month < 1 || month > 12 || day < 1 || year < 1) {
        return false;
    }
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return day <= 29;
    }
    return day <= daysInMonth[month];
}

void BitcoinExchange::printBtcValueByRate(const std::string &date, float btc)
{
	if (isValidDate(date) == 0)
		std::cout << "Error: date not valid => " << date << std::endl;
	else if (btc < 0)
		std::cout << "Error: not a positive number" << std::endl;
	else if (btc > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
		std::cout << date << " => " << btc << " = " << exchangeRate(date) * btc << std::endl;
}

bool BitcoinExchange::checkLine(std::string line)
{
	int i;

	i = 0;
	while (isdigit(line[i]))
		i++;
	if (i != 4 || line[i] != '-')
		return (false);
	i++;
	while (isdigit(line[i]))
		i++;
	if (i != 7 || line[i] != '-')
		return (false);
	i++;
	while (isdigit(line[i]))
		i++;
	if (i != 10 || line.find(" | ") != 10)
		return (false);
	i = 13;
	if (line[i] == '-')
		i++;
	while (isdigit(line[i]))
		i++;
	if (line[i] == '.' && line[i + 1] != '\0')
	{
		i++;
		while (isdigit(line[i]))
			i++;
	}
	if (line[i] != '\0')
		return (false);
	return (true);
}

void BitcoinExchange::BtcValueByRate(std::string fileName)
{
	std::ifstream	file(fileName.c_str());
	std::string		line;

	if (!file.is_open())
		throw UnreadableInFileException();
	getline(file, line);
	if (line != "date | value")
		std::cout << "\e[33mHeader not ok\e[0m" << std::endl;
	while (getline(file, line))
	{
		if (!checkLine(line))
			std::cout << "Error: bad input => " << line << std::endl;
		else
			printBtcValueByRate(line.substr(0, 10), strtof(line.substr(13).c_str(), NULL));
		if (file.eof())
			break;
	}
}
