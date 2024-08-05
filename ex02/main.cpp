/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 06:27:00 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/05 21:13:29 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>
// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//
// 	return 0;
// }

int main()
{
	try {
		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			intArray[i] = i * 10;
		}
		
		std::cout << "intArray elements: ";
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;

		Array<int> copiedArray(intArray);
		std::cout << "copiedArray elements (after copy): ";
		for (unsigned int i = 0; i < copiedArray.size(); ++i)
		{
			std::cout << copiedArray[i] << " ";
		}
		std::cout << std::endl;

		copiedArray[2] = 999;
		std::cout << "intArray elements (after modifying copiedArray): ";
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;
		
		std::cout << "copiedArray elements (after modification): ";
		for (unsigned int i = 0; i < copiedArray.size(); ++i)
		{
			std::cout << copiedArray[i] << " ";
		}
		std::cout << std::endl;

		std::cout << intArray[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
