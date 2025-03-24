/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:50:25 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 17:25:58 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include "Data.hpp"

class Serializer {

	private:
		Serializer(void);
		Serializer(const Serializer& other);
		Serializer &operator=(const Serializer& other);
		
	public:
		~Serializer(void);
	
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
