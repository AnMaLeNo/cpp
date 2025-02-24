/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:37:38 by amonot            #+#    #+#             */
/*   Updated: 2025/02/23 18:36:13 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *_brain;

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat& operator=(const Cat& other);

		void makeSound(void) const;
};
