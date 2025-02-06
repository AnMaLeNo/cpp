/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:48 by amonot            #+#    #+#             */
/*   Updated: 2025/01/27 14:28:51 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int		nbrZ;
	
	nbrZ = 214;
	zombie = zombieHorde(nbrZ, "zzz");
	if (zombie == NULL)
	{
		std::cout << "zombieHorde fail" << std::endl;
		return (1);
	}
	for (int i = 0; i < nbrZ; i++)
		zombie[i].announce();
	delete []zombie;

	Zombie *zFail;

	zFail = zombieHorde(-12, "fail");
	if (zFail == NULL)
		std::cout << "NULL" << std::endl;
	else
	{
		std::cout << "ok" << std::endl;
		delete []zFail;
	}
	return (0);
}
