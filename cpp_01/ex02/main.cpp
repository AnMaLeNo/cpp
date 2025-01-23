/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:21:28 by amonot            #+#    #+#             */
/*   Updated: 2025/01/17 12:10:17 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	brain;
	void		*stringPTR;
	std::string	&stringREF = brain;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	stringREF = "test";
	std::cout << "brain : " << brain << std::endl;
	std::cout << "stringPTR : " << *(std::string *)stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
}
