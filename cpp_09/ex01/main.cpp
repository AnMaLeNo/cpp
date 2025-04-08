/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:33:17 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 16:53:16 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "\e[33mOnly one argument is required\e[0m" << std::endl;
		return (0);
	}
	try{
		std::cout << rpn(argv[1]) << std::endl;
	} catch (std::exception &e) {
		std::cout << "\e[31m" << e.what() << "\e[0m" << std::endl;
	}
	return (0);
}
