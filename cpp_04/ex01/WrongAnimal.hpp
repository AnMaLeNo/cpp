/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:49:42 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:51:41 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal {
	
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal(void);

		WrongAnimal& operator=(const WrongAnimal& other);

		void makeSound(void) const;
		std::string getType(void) const;
};
