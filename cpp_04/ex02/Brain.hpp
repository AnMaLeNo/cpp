/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:45:40 by amonot            #+#    #+#             */
/*   Updated: 2025/02/23 16:05:12 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
	
	private:
		std::string _ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		Brain& operator=(const Brain& other);
};
