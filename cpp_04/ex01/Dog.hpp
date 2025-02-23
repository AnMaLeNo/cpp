/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:37:08 by amonot            #+#    #+#             */
/*   Updated: 2025/02/23 18:22:10 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain *_brain;

	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);

		Dog& operator=(const Dog& other);

		void makeSound(void) const;
};
