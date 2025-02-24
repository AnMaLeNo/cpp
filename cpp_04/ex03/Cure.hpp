/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:20:17 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 03:03:49 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		~Cure(void);
		
		// operator= ?????????????????

		AMateria* clone() const;
		void use(ICharacter& target);
};
