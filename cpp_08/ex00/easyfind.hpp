/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:49:38 by amonot            #+#    #+#             */
/*   Updated: 2025/04/03 18:54:30 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template < typename T >
int &easyfind(T type, int nbr)
{
	return (std::find(type.begin(), type.end(), nbr));
}