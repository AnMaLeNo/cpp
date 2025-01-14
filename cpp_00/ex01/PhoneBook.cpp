/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:59:09 by amonot            #+#    #+#             */
/*   Updated: 2025/01/14 17:13:10 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructeur PhoneBook" << std::endl;
	new_idx = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructeur PhoneBook" << std::endl;
	return ;
}

void PhoneBook::add(void)
{
	contacts[new_idx].set_first_name();
	contacts[new_idx].set_last_name();
	contacts[new_idx].set_nickname();
	contacts[new_idx].set_phone_number();
	contacts[new_idx].set_darkest_secret();
	if (std::cin.eof())
		return ;
	std::cout << "\n---New contact saved---\n" << std::endl;
	new_idx++;
	if (new_idx == 8)
		new_idx = 0;
}

void adj_column(std::string &str)
{
	std::string space = "          ";
	if (str.length() > 10)
	{
		str.erase(10, str.length());
		str.replace(9, 1, ".");
	}
//	else
//		str.insert(0, space, 0, 10 - str.length());
}

#include <iostream>     // std::cout, std::endl
#include <iomanip> 

void printf_line(std::string c1, std::string c2, std::string c3, std::string c4)
{
	adj_column(c1);
	adj_column(c2);
	adj_column(c3);
	adj_column(c4);
	std::cout << "|" << std::setfill (' ') << std::setw (10) << c1
		<< "|" << std::setfill (' ') << std::setw (10) << c2
		<< "|" << std::setfill (' ') << std::setw (10) << c3
		<< "|" << std::setfill (' ') << std::setw (10) << c4
		<< "|" << std::endl;
}

std::string int_str(int nbr)
{
	std::ostringstream oss;
	
	oss << nbr;
	return (oss.str());
}

static bool check_eof(void)
{
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return (true);
	}
	return (false);
}

void PhoneBook::print_conctact(int i)
{
	if (i < 0 || i > 7)
	{
		std::cout << "Bad index" << std::endl;
		return ;
	}
	if (contacts[i].get_last_name().length() == 0)
	{
		std::cout << "Empty" << std::endl;
		std::cout << "\n-------------------------------\n" << std::endl;
		return ;
	}
	std::cout << "first_name: " << contacts[i].get_first_name() << std::endl;
	std::cout << "last_name: " << contacts[i].get_last_name() << std::endl;
	std::cout << "nickname: " << contacts[i].get_nickname() << std::endl;
	std::cout << "phone_number: " << contacts[i].get_phone_number() << std::endl;
	std::cout << "darkest_secret: " << contacts[i].get_darkest_secret() << std::endl;
	std::cout << "\n-------------------------------\n" << std::endl;
}

static bool is_digit(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "Only digit characters are allowed." << std::endl;
			return (false);
		}
	}
	return (true);
}

void PhoneBook::search(void)
{
	std::string index;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
		printf_line(int_str(i),
					contacts[i].get_first_name(),
					contacts[i].get_last_name(),
					contacts[i].get_nickname());
	do {
		std::getline(std::cin, index);
		if ((std::atoi(index.c_str()) < 0) || (std::atoi(index.c_str()) > 7))
			std::cout << "Bad index" << std::endl;
		if (index.length() == 0)
			std::cout << "index cannot be empty." << std::endl;
	} while (check_eof() || (std::atoi(index.c_str()) < 0) || (std::atoi(index.c_str()) > 7) || index.length() == 0 || !is_digit(index));
	print_conctact(std::atoi(index.c_str()));
}
