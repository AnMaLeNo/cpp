/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:02:10 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 05:01:18 by amonot           ###   ########.fr       */
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
	AMateria* cure = new Cure();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");


	me->equip(ice);
	me->equip(cure);
	me->equip(cure);
	me->use(3, *bob);
	me->use(4, *bob);
	me->equip(cure);
	me->equip(cure);// fail;
	me->use(1, *bob);
	me->use(0, *bob);

	std::cout << std::endl;
	me->use(2, *bob);
	me->unequip(10);
	me->unequip(2);
	me->equip(ice);
	me->use(2, *bob);

	return (0);
} */

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