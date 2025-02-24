/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:19:45 by amonot            #+#    #+#             */
/*   Updated: 2025/02/24 03:03:55 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		~Ice(void);
		
		// operator= ?????????????????

		AMateria* clone() const;
		void use(ICharacter& target);
};
