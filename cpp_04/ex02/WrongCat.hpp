/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:50:05 by amonot            #+#    #+#             */
/*   Updated: 2025/02/22 03:04:54 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& other);

		void makeSound(void) const;
};
