/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/08 14:07:33 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed	a;
	Fixed 	const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed ac(Fixed( 5.05f ) + Fixed( 2 ));
	// std::cout << "Fixed(5.05f) + Fixed(2) = " << ac << std::endl;
	// Fixed ad(Fixed( 5.05f ) - Fixed( 2 ));
	// std::cout << "Fixed(5.05f) - Fixed(2) = " << ad << std::endl;
	// Fixed ae(Fixed( 5.05f ) / Fixed( 2 ));
	// std::cout << "Fixed(5.05f) / Fixed(2) = " << ae << std::endl;
	// Fixed af(Fixed( 5.05f ) * Fixed( 2 ));
	// std::cout << "Fixed(5.05f) * Fixed(2) = " << af << std::endl;

	// Fixed c = b / Fixed(2);
	// std::cout << c << std::endl;
	// std::cout << "\nMy tests: \n";
	// std::cout << "a = " << a.getRawBits() << std::endl;
	// ++a;
	// std::cout << "++a\n";
	// std::cout << "After pre increment, a = " << a.getRawBits() << std::endl;
	// std::cout << "In pos increment line, a = " << a++.getRawBits() << std::endl;
	// std::cout << "a++\n";
	// std::cout << "After pos increment, a = " << a.getRawBits() << std::endl;
	// std::cout << "b: " << b << std::endl;
	// std::cout << "b to int: " << b.toInt() << std::endl;
	// std::cout << "b = " << b.toFloat() << std::endl;
	// std::cout << "Max value between a and b: " << Fixed::max( a, b ) << std::endl;
	// if (a > b)
	// 	std::cout << "a greater than b\n";
	// if (a < b)
	// 	std::cout << "b greater than a\n";
	// if (a != b)
	// 	std::cout << "a different of b\n";

	// Fixed c = b;
	// std::cout << "c = " << c.getRawBits() << std::endl;
	// c++;
	// std::cout << "c = " << c.getRawBits() << std::endl;
	// c--;
	// std::cout << "c = " << c.getRawBits() << std::endl;
	return 0;
}

// $> ./a.out
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
// $>
