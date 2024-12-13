/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:48 by amonot            #+#    #+#             */
/*   Updated: 2024/12/13 17:50:52 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("antoine");
	Zombie *new_zombie;

	randomChump("randomChump 1");
	new_zombie = newZombie("new_z");
	new_zombie->announce();
	zombie.announce();

	randomChump("randomChump 2");
	randomChump("randomChump 3");
	delete new_zombie;
	return (0);
}
