/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:30:27 by amonot            #+#    #+#             */
/*   Updated: 2025/04/02 17:22:26 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <exception>
#include <iostream>

template< typename T >
class Array {
	
	private:
		T				*_tab;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int size);
		Array(const Array<T> &other);
		~Array(void);

		T& operator[](unsigned int i);
		Array<T>& operator=(const Array<T> &other);
		
		class IndexOutOfBoundsException : public std::exception {
			public:
				const char* what() const throw() {
					return ("Index is out of bounds");
				}
		};
};

template< typename T >
Array<T>::Array(void)
{
	_tab = new T[0];
	_size = 0;
}

template< typename T >
Array<T>::Array(unsigned int size)
{
	_tab = new T[size];
	_size = size;
}

template< typename T >
Array<T>::Array(const Array<T> &other)
{
	if (this != &other)
	{
		_tab = new T[other._size];
		_size = other._size;
		for (unsigned int i = 0; i < other._size; i++)
			_tab[i] = other._tab[i];
	}
}

template< typename T >
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw IndexOutOfBoundsException();
	return (_tab[i]);
}

template< typename T >
Array<T>& Array<T>::operator=(const Array<T> &other)
{
	std::cout << "operator = of Array" << std::endl;
	if (this != &other)
	{
		delete[] _tab;
		_tab = new T[other._size];
		_size = other._size;
		for (unsigned int i = 0; i < other._size; i++)
			_tab[i] = other._tab[i];
	}
	return (*this);
}

template< typename T >
Array<T>::~Array(void)
{
	delete[] _tab;
}