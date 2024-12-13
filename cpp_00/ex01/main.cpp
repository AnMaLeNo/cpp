/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:01:24 by amonot            #+#    #+#             */
/*   Updated: 2024/12/12 21:12:06 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool check_eof(void)
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

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	do {
		std::cin >> input;
		if (check_eof())
			continue ;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
	} while (input != "EXIT");
	return (0);
}
