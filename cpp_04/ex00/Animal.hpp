/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:07:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:29:41 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
	
	protected:
		std::string _type;
		std::string _sound;

	public:
		Animal(void);
		Animal(const Animal& other);
		~Animal(void);

		Animal& operator=(const Animal& other);

		void makeSound(void) const;
		std::string getType(void) const;
};
