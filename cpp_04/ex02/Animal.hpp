/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:07:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 00:51:22 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
	
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		Animal& operator=(const Animal& other);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};
