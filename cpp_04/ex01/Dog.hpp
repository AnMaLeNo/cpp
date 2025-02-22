/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:37:08 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 02:57:56 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <string>

class Dog : public Animal {

	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);

		Dog& operator=(const Dog& other);
};
