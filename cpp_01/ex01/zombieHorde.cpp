/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:50:15 by amonot            #+#    #+#             */
/*   Updated: 2025/01/27 16:45:00 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *zombie;

	if (n <= 0)
		return (NULL);
	try
	{
		zombie = new Zombie[n];
	}
	catch (std::bad_alloc)
	{
		std::cerr << "bad_alloc caught in zombieHorde" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < n; i++)
		zombie[i].set_name(name);
	return (zombie);
}
