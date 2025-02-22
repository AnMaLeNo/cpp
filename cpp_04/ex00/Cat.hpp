/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:37:38 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 17:53:33 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat& operator=(const Cat& other);

		void makeSound(void) const;
};
