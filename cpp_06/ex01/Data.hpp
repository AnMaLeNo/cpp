/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:09:44 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 17:23:06 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data {

	public:
		Data(void);
		Data(const Data* other);
		~Data(void);

		Data &operator=(const Data& other);

		int i;

};
