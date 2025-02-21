/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:05:36 by amonot            #+#    #+#             */
/*   Updated: 2025/02/21 18:25:18 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap kv("kevin");
	ScavTrap cp(kv);

	kv.guardGate();
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.attack("44ST");
	kv.beRepaired(200);
	kv.takeDamage(300);
	kv.attack("44ST"); // fail
	kv.beRepaired(1);
	kv.attack("44ST");
	kv.attack("44ST");

	kv.attack("44ST"); // fail
	kv.beRepaired(1); //  fail

	cp.attack("test");
	cp.attack("test");
	cp.attack("test");

	cp = kv;
	cp.attack("test"); // fail

	return (0);
}