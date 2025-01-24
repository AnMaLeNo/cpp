/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:11:41 by amonot            #+#    #+#             */
/*   Updated: 2025/01/24 17:17:16 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	Harl obj;

	if (level.compare("DEBUG") == 0)
	{	
		void (Harl::*ptrToMemberFunc)(void) = &Harl::debug;
		std::cout << "DEBUG" << std::endl;
		(obj.*ptrToMemberFunc)();
	}
	else if (level.compare("INFO") == 0)
	{
		void (Harl::*ptrToMemberFunc)(void) = &Harl::info;
		std::cout << "INFO" << std::endl;
		(obj.*ptrToMemberFunc)();
	}
	else if (level.compare("WARNING") == 0)
	{
		void (Harl::*ptrToMemberFunc)(void) = &Harl::warning;
		std::cout << "WARNING" << std::endl;
		(obj.*ptrToMemberFunc)();
	}
	else if (level.compare("ERROR") == 0)
	{
		void (Harl::*ptrToMemberFunc)(void) = &Harl::error;
		std::cout << "ERROR" << std::endl;
		(obj.*ptrToMemberFunc)();
	}
	else
		return;

}
