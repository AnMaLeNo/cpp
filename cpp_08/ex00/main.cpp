/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:48:29 by amonot            #+#    #+#             */
/*   Updated: 2025/04/03 18:55:25 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include "easyfind.hpp"

int main(void)
{
	std::array<int, 5> array = { 2, 16, 77, 34, 50 };

	std::cout << easyfind(array, 16) << std::endl;
}