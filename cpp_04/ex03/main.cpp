/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:02:10 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:18:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
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
	ICharacter* bobcp = new Character(*(Character *)bob);

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
	me->equip(new Ice());
	me->equip(ice);
	me->equip(ice);
	me->equip(ice);

	bob->use(1, *bob);
	me->use(3, *bob);

	*(Character *)bob = *(Character *)me;
	*(Character *)bob = *(Character *)me;


	bob->use(1, *bob);
	me->use(3, *bob);

	std::cout << "==========test_leak==========" << std::endl;
	//me->unequip(0);
	me->unequip(2);
	me->unequip(3);

	//delete ice;
	delete cure;
	delete me;
	delete bob;
	delete bobcp;
	return (0);
}

// il faut test si ca free si je afecte = a un caractair il faut que ca free les encier iteme e l'interieur
// !!!!!!!!!!!!!!!!!! test = avec materia !!!!!!!!!!!!!!!!!!!!!!

/* int main (void)
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* srcCp = new MateriaSource();
	IMateriaSource* srcCpCp = new MateriaSource(*(MateriaSource *)srcCp);
	//AMateria* tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	srcCp->learnMateria(new Cure());
	srcCp->learnMateria(new Cure());
	srcCp->learnMateria(new Cure());
	srcCp->learnMateria(new Cure());
	AMateria *test = new Cure();
	srcCp->learnMateria(test);//fail
	delete test;

	delete src->createMateria("ice");
	delete src->createMateria("cure");
	delete src->createMateria("stick");

	*(MateriaSource *)srcCp = *(MateriaSource *)src;
	*(MateriaSource *)srcCp = *(MateriaSource *)src;
	*(MateriaSource *)srcCpCp = *(MateriaSource *)srcCp;
	*(MateriaSource *)srcCp = *(MateriaSource *)srcCpCp;


	delete (srcCpCp);
	delete (srcCp);
	delete (src);
	return (0);
}; */


/*  int main()
 {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
} */