/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:59:09 by amonot            #+#    #+#             */
/*   Updated: 2024/12/12 21:22:15 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructeur PhoneBook" << std::endl;
	new_idx = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructeur PhoneBook" << std::endl;
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
	else
		str.insert(0, space, 0, 10 - str.length());
}

void printf_line(std::string c1, std::string c2, std::string c3, std::string c4)
{
	adj_column(c1);
	adj_column(c2);
	adj_column(c3);
	adj_column(c4);
	std::cout << "|" << c1 << "|" << c2 << "|" << c3 << "|" << c4 << "|" << std::endl;
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
		return ;
	}
	std::cout << "first_name: " << contacts[i].get_first_name() << std::endl;
	std::cout << "last_name: " << contacts[i].get_last_name() << std::endl;
	std::cout << "nickname: " << contacts[i].get_nickname() << std::endl;
	std::cout << "phone_number: " << contacts[i].get_phone_number() << std::endl;
	std::cout << "darkest_secret: " << contacts[i].get_darkest_secret() << std::endl;
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
		std::cin >> index;
	} while (check_eof());
	print_conctact(std::atoi(index.c_str()));
}