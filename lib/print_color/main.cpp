/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:21:53 by amonot            #+#    #+#             */
/*   Updated: 2025/03/06 15:53:13 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print(char c, std::string str)
{
	if (c == 'r')
		std::cout << "\033[38;2;231;76;60m"	<< str << "\033[0m" << std::endl;
	else if (c == 'p')
		std::cout << "\033[38;2;142;68;173m" << str << "\033[0m" << std::endl;
	else if (c == 'b')
		std::cout << "\033[38;2;52;152;219m" << str << "\033[0m" << std::endl;
	else if (c == 'g')
		std::cout << "\033[38;2;39;174;96m" << str << "\033[0m" << std::endl;
	else if (c == 'y')
		std::cout << "\033[38;2;241;196;15m" << str << "\033[0m" << std::endl;
	else if (c == 'o')
		std::cout << "\033[38;2;230;126;34m" << str << "\033[0m" << std::endl;
	else if (c == 'w')
		std::cout << str << std::endl;
}

int main(void)
{
	print('r', "test couleur r");
	print('p', "test couleur p");
	print('b', "test couleur b");
	print('g', "test couleur g");
	print('y', "test couleur y");
	print('o', "test couleur o");
	print('w', "test couleur w");
	return (0);
}