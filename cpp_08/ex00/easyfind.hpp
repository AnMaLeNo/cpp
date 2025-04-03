/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:49:38 by amonot            #+#    #+#             */
/*   Updated: 2025/04/03 23:54:15 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>

template < typename T >
int *easyfind(T& type, int nbr)
{
	typename T::iterator it;
	it = std::find(type.begin(), type.end(), nbr);
	if (it == type.end())
		return (NULL);
	return (&(*it));
}