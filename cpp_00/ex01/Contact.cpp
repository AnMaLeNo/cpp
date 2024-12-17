/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:18:42 by amonot            #+#    #+#             */
/*   Updated: 2024/12/12 21:28:46 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Constructeur Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Destructeur Contact" << std::endl;
	return ;
}

bool is_alpha(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!std::isalpha(str[i]) && !isblank(str[i]))
		{
			std::cout << "Only alphabetic characters are allowed." << std::endl;
			return (false);
		}
	}
	return (true);
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

bool is_graph(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!std::isgraph(str[i]))
		{
			std::cout << "Only characters with graphical representation are allowed." << std::endl;
			return (false);
		}
	}
	return (true);
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

void Contact::set_first_name(void)
{
	std::cout << "first_name :" << std::endl;
	do {
		std::getline(std::cin, first_name);
		if (first_name.length() == 0)
			std::cout << "First name cannot be empty." << std::endl;
	} while (check_eof() || !is_alpha(first_name) || first_name.length() == 0);
}

void Contact::set_last_name(void)
{
	std::cout << "last_name :" << std::endl;
	do {
		std::getline(std::cin, last_name);
		if (last_name.length() == 0)
			std::cout << "Last name cannot be empty." << std::endl;
	} while (check_eof() || !is_alpha(last_name) || last_name.length() == 0);
}

void Contact::set_nickname(void)
{
	std::cout << "nickname :" << std::endl;
	do {
		std::getline(std::cin, nickname);
		if (nickname.length() == 0)
			std::cout << "Nickname cannot be empty." << std::endl;
	} while (check_eof() || !is_alpha(nickname) || nickname.length() == 0);
}

void Contact::set_phone_number(void)
{
	std::cout << "phone_number :" << std::endl;
	do {
		std::getline(std::cin, phone_number);
		if (phone_number.length() == 0)
			std::cout << "Phone_number cannot be empty." << std::endl;
	} while (check_eof() || !is_digit(phone_number) || phone_number.length() == 0);
}

void Contact::set_darkest_secret(void)
{
	std::cout << "darkest_secret :" << std::endl;
	do {
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.length() == 0)
			std::cout << "Darkest secret cannot be empty." << std::endl;
	} while (check_eof() || !is_graph(darkest_secret) || darkest_secret.length() == 0);
}

std::string Contact::get_first_name(void)
{
	return (first_name);
}

std::string Contact::get_last_name(void)
{
	return (last_name);
}

std::string Contact::get_nickname(void)
{
	return (nickname);
}

std::string Contact::get_phone_number(void)
{
	return (phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (darkest_secret);
}
