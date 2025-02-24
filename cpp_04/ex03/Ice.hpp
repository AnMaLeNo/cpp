/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:19:45 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 17:18:59 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(const Ice& other);
		~Ice(void);
		
		Ice& operator=(const Ice& other);

		AMateria* clone() const;
		void use(ICharacter& target);
};
