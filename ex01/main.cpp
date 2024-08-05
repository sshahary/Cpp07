/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:20:52 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/05 21:24:29 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printInt(int x)
{
	std::cout << x << " ";
}

void printChar(char c)
{
	std::cout << c << " ";
}

void increment(int& x)
{
	++x;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	std::size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original int array: ";
	iter(intArray, intArrayLength, printInt);
	std::cout << std::endl;

	iter(intArray, intArrayLength, increment);
	std::cout << "Incremented int array: ";
	iter(intArray, intArrayLength, printInt);
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);

	std::cout << "Original char array: ";
	iter(charArray, charArrayLength, printChar);
	std::cout << std::endl;

	return 0;
}

// #include <iostream>

// // Template function definition
// template<typename T, typename F>
// void iter(T *array, std::size_t length, void(*func)(F))
// {
//     if (array == NULL)
//         return;
//     for(std::size_t i = 0; i < length; i++)
//         func(array[i]);
// }

// // Function to print an integer (used with iter)
// void printInt(int x)
// {
//     std::cout << x << std::endl;
// }

// // Function to set a value to 42 (used with iter)
// void setValueTo42(int &x)
// {
//     x = 42;
// }

// int main()
// {
//     // Initialize an array of integers
//     int array[] = {0, 1, 2, 3, 4};
//     std::size_t length = sizeof(array) / sizeof(array[0]);

//     // Use iter to print the array elements
//     iter(array, length, printInt);

//     // Use iter to set each element to 42
//     iter(array, length, setValueTo42);

//     // Use iter to print the modified array elements
//     iter(array, length, printInt);

//     return 0;
// }
