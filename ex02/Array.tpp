/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 05:52:53 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/04 05:57:30 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Default constructor
template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

// Constructor with size
template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(0)
{
	*this = other;
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _data;
		_size = other._size;
		_data = new T[_size]();
		copyData(other._data, _data, _size);
	}
	return *this;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
	{
		throw OutOfBoundsException();
	}
	return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
	{
		throw OutOfBoundsException();
	}
	return _data[index];
}

// Size member function
template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

// Helper function to copy data
template <typename T>
void Array<T>::copyData(const T* source, T* destination, unsigned int size)
{
	for (unsigned int i = 0; i < size; ++i)
	{
		destination[i] = source[i];
	}
}
