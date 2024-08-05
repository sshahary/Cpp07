/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 04:08:23 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/05 21:20:27 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}


// #include <iostream>
// #include <string>
// #include <algorithm> // For std::swap, std::min, std::max
// #include <complex> // For std::complex

// int main() {
// 	// Testing with integers
// 	int a = 2;
// 	int b = 3;
// 	std::swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min(a, b) = " << std::min(a, b) << std::endl;
// 	std::cout << "max(a, b) = " << std::max(a, b) << std::endl;

// 	// Testing with strings
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	std::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min(c, d) = " << std::min(c, d) << std::endl;
// 	std::cout << "max(c, d) = " << std::max(c, d) << std::endl;

// 	// Testing with complex numbers
// 	std::complex<double> e(1, 2);
// 	std::complex<double> f(3, 4);
// 	std::swap(e, f);
// 	std::cout << "e = " << e << ", f = " << f << std::endl;
// 	// Note: min and max are not typically defined for complex numbers,
// 	// as they do not have a natural ordering. For demonstration purposes,
// 	// we will compare their magnitudes.
// 	std::cout << "min(e, f) = " << (std::abs(e) < std::abs(f) ? e : f) << std::endl;
// 	std::cout << "max(e, f) = " << (std::abs(e) > std::abs(f) ? e : f) << std::endl;

// 	return 0;
// }
