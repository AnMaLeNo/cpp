/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:20:17 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:19:46 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(const Cure& other);
		~Cure(void);
		
		Cure& operator=(const Cure& other);

		AMateria* clone() const;
		void use(ICharacter& target);
};
