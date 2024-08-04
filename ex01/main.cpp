/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:20:52 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/04 04:47:46 by sshahary         ###   ########.fr       */
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
