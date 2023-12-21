/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:16 by ialves-m          #+#    #+#             */
/*   Updated: 2023/12/18 14:54:51 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int& original) {
	std::cout << "Copy constructor called" << std::endl;
	
	(void) original;

}

Fixed& Fixed::operator=(const Fixed& original) {
	std::cout << "Copy assignment operator called" << std::endl;
	(void) original;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return 0;
}

void Fixed::setRawBits(int const raw) {
	(void) raw;

}
