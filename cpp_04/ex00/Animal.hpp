/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:07:47 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 17:57:37 by amonot           ###   ########.fr       */
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
		~Animal(void);

		Animal& operator=(const Animal& other);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};
