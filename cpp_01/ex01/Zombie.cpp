/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:07:10 by amonot            #+#    #+#             */
/*   Updated: 2024/12/13 18:26:28 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	//std::cout << "Constructeur Zombie" << std::endl;
	name = "Z";
}

Zombie::Zombie(std::string name)
{
	//std::cout << "Special constructeur Zombie" << std::endl;
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
