/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/02 19:14:21 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& input) {
	std::cout << "Copy constructor called" << std::endl;
	(void) input;

}

Fixed& Fixed::operator=(const Fixed& input){
	std::cout << "Copy assignment operator called" << std::endl;
	(void) input;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw){
	this->fixedPoint = raw;

}
