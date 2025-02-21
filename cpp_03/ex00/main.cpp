/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:05:36 by amonot            #+#    #+#             */
/*   Updated: 2025/02/21 14:15:49 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap;
	ClapTrap cp(clapTrap);
	ClapTrap kevin("Kevin");

	kevin.attack("steev");
	kevin.attack("steev");
	kevin.takeDamage(1);
	kevin.takeDamage(1);
	kevin.takeDamage(7);
	kevin.attack("steev");
	kevin.takeDamage(1);
	kevin.attack("steev");
	kevin.takeDamage(1);
	kevin.takeDamage(2147483647);
	kevin.takeDamage(2147483647);
	kevin.beRepaired(20);
	kevin.attack("steev");
	kevin.beRepaired(2147483647);
	kevin.beRepaired(2147483647);
	kevin.beRepaired(2147483647);
	kevin.attack("steev");
	kevin.beRepaired(2147483647);
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.attack("steev");
	kevin.beRepaired(1);
	kevin.takeDamage(1);
	kevin.beRepaired(1);

	return (0);
}