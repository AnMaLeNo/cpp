/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:14:02 by amonot            #+#    #+#             */
/*   Updated: 2025/01/27 14:44:50 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string& getType(void);
		void setType(std::string type);

	private:
		std::string type;
};
