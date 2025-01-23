/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:49:01 by amonot            #+#    #+#             */
/*   Updated: 2025/01/23 16:15:40 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

// class Weapon{};

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void);

	private:
		std::string name;
		Weapon &weapon;
};
