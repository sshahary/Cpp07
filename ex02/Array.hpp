/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:56:08 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/04 05:58:26 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
	T* _data;
	unsigned int _size;
	public:
	// Default constructor
	Array();
	
	// Constructor with size
	Array(unsigned int n);
	
	// Copy constructor
	Array(const Array& other);
	
	// Assignment operator
	Array& operator=(const Array& other);
	
	// Destructor
	~Array();
	
	// Subscript operator
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	
	// Size member function
	unsigned int size() const;
	
	void copyData(const T* source, T* destination, unsigned int size);
};

// Exception class for out of bounds access
class OutOfBoundsException : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return "Index out of bounds";
	}
};

// Implementation of Array class template methods
#include "Array.tpp"

#endif // ARRAY_HPP
