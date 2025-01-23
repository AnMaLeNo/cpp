/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:36:55 by amonot            #+#    #+#             */
/*   Updated: 2025/01/23 22:08:22 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	char c;
	std::string s1;
	std::string OFName;
	std::string str;

	if (argc == 4)
	{
		std::ifstream inFile(argv[1]);
		s1 = argv[2];
		if (!inFile.is_open()) {
			std::cerr << "Error opening the file!";
			return 1;
		}
		OFName = argv[1];
		OFName += ".replace";
		std::ofstream outFile(OFName.c_str());
		while (inFile.get(c))
		{
			str += c;
			if (str.size() >=  s1.size())
			{
				if (str.compare(str.size() - s1.size(), s1.size(), s1) == 0)
				{
					str.erase(str.size() - s1.size(), s1.size());
					str += argv[3];
				}
			}
			if (str.size() >  s1.size())
			{
				outFile << str.c_str()[0];
				str.erase(0, 1);
			}
		}
		outFile << str;
	}
	else
		std::cout << "3 parameters are required." << std::endl;

	return (0);
}
