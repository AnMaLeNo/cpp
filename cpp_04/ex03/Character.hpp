/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:02:53 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 04:09:26 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {

	private:
		std::string	_name;
		AMateria	*_items[4];

	public:
		Character(const std::string name);
		Character(const Character* other);
		~Character(void);

		Character& operator=(const Character& other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
