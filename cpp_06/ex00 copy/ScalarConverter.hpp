/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:38 by amonot            #+#    #+#             */
/*   Updated: 2025/03/16 17:09:37 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ScalarConverter {

	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter(void);

		ScalarConverter& operator=(const ScalarConverter &other);

		void convert(std::string literal);
};
