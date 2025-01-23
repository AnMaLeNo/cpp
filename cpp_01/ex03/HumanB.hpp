/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:47:58 by amonot            #+#    #+#             */
/*   Updated: 2025/01/21 16:07:51 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

// class Weapon{};

class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon&weapon);
		void attack(void);

	private:
		std::string name;
		Weapon *weapon;
};
