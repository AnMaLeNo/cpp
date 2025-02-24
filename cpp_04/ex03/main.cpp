/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:02:10 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 05:31:03 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include <iostream>

/* int main(void)
{
	AMateria* ice = new Ice();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	*(Character *)me = *(Character *)bob;

	ice->clone();
	return (0);
}
 */
int main(void)
{
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << "==========test_equip==========" << std::endl;
	me->equip(ice);
	me->equip(cure);
	me->equip(ice);
	me->equip(cure);
	me->equip(cure);// no place
	me->equip(cure);// no place

	me->use(0, *bob);// ice
	me->use(1, *bob);// cure
	me->use(2, *bob);// ice
	me->use(3, *bob);// cure

	std::cout << "==========test_unequip==========" << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(1); // vide
	me->unequip(10); // invalid

	me->equip(cure);	
	me->equip(ice);

	me->use(0, *bob);// cure
	me->use(1, *bob);// ice
	me->use(2, *bob);// ice
	me->use(3, *bob);// cure

	std::cout << "==========test_use==========" << std::endl;

	me->use(0, *bob);

	me->unequip(0);

	me->use(0, *bob);// vide
	me->use(145, *bob);// invalid

	std::cout << "==========test (bob = me)==========" << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->equip(ice);
	me->equip(ice);
	me->equip(ice);
	me->equip(ice);

	bob->use(1, *bob);
	me->use(3, *bob);
	*(Character *)bob = *(Character *)me;
	bob->use(1, *bob);
	me->use(3, *bob);

	std::cout << "==========test_leak==========" << std::endl;
	me->unequip(0);
	me->unequip(2);
	me->unequip(3);

	//delete ice;
	delete cure;
	delete me;
	delete bob;
	return (0);
}