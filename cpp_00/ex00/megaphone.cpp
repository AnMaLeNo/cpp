/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:12:44 by amonot            #+#    #+#             */
/*   Updated: 2024/12/10 19:53:30 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < argc; i++) 
	{
		std::string word(argv[i]);
		for (size_t j = 0; j < word.length(); j++)
			word[j] = std::toupper(word[j]);
		std::cout << word;
	}
	std::cout << std::endl;
    return (0);
}
