/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:48 by amonot            #+#    #+#             */
/*   Updated: 2025/01/27 13:46:40 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Foo");
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
