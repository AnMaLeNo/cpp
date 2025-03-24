/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:49:45 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 17:42:06 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data();
	Data *ptr;
	uintptr_t raw;

	raw = Serializer::serialize(data);
	std::cout << "data->i: " << data->i << std::endl;
	std::cout << "data *: " << data << std::endl;
	std::cout << raw << std::endl;
	ptr = Serializer::deserialize(raw);
	std::cout << "ptr *: " << ptr << std::endl;
	std::cout << "ptr->i: " << ptr->i << std::endl;

	return (0);
}