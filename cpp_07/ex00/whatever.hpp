/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:23:46 by amonot            #+#    #+#             */
/*   Updated: 2025/03/25 19:44:34 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T &min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template< typename T >
T &max(T &a, T &b)
{
	return ((a > b) ? a : b);
}