/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:07:05 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 00:52:52 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

/* int main(void)
{
	Animal animal;

	return (0);
} */

int main(void)
{
	Animal *animal[4];
	Cat chat;

	animal[0] = new Cat();
	animal[1] = new Cat(chat);
	animal[2] = new Dog();
	animal[3] = new Dog();
	for (int i = 0; i < 4; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
	}
	for (int i = 0; i < 4; i++)
		delete animal[i];
	return (0);
}

/* int main(void)
{
	Brain b;
	Brain c;
	Brain cp(b);

	c = b;
	return (0);
} */

/* int main(void)
{
	Brain *b = new Brain();
	Brain *c = new Brain();

	b->_ideas[0] = "test";
	std::cout << b->_ideas[0] << std::endl;
	std::cout << c->_ideas[0] << std::endl;
	c = b;
	std::cout << b->_ideas[0] << std::endl;
	std::cout << c->_ideas[0] << std::endl;
	return (0);
} */

/* int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;
} */