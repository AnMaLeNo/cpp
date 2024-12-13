/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:48 by amonot            #+#    #+#             */
/*   Updated: 2024/12/13 18:26:44 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *zombie;

	if (n <= 0)
		return (NULL);
	zombie = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombie[i].set_name(name);
	return (zombie);
}

int main(void)
{
	Zombie *zombie;
	
	zombie = zombieHorde(3, "zzz");
	for (int i = 0; i < 3; i++)
		zombie[i].announce();
	delete []zombie;
	return (0);
}
