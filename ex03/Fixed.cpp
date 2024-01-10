/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/10 15:57:12 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int& input) {
	// std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = input << this->fractionalBits;
}

Fixed::Fixed(const float& input) {
	// std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(input * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& input) {
	// std::cout << "Copy assignment operator called" << std::endl;
    if (this != &input) {
        this->setRawBits(input.getRawBits());
    }
    return *this;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
};

int Fixed::toInt(void) const {
	return (this->fixedPoint >> this->fractionalBits);
}

float Fixed::toFloat(void) const {
	return ((float)this->fixedPoint / (float)(1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const {
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw){
	this->fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a.fixedPoint < b.fixedPoint) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a.fixedPoint > b.fixedPoint) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

bool Fixed::operator>(Fixed value) {
	return (value.fixedPoint > this->fixedPoint) ? true : false;
};

bool Fixed::operator<(Fixed value) {
	return (value.fixedPoint < this->fixedPoint) ? true : false;
};

bool Fixed::operator>=(Fixed value) {
	return (value.fixedPoint >= this->fixedPoint) ? true : false;
};

bool Fixed::operator<=(Fixed value) {
	return (value.fixedPoint <= this->fixedPoint) ? true : false;
};

bool Fixed::operator==(Fixed value) {
	return (value.fixedPoint == this->fixedPoint) ? true : false;
};

bool Fixed::operator!=(Fixed value) {
	return (value.fixedPoint != this->fixedPoint) ? true : false;
};

Fixed Fixed::operator+(const Fixed& value) {
	return this->toFloat() + value.toFloat();
};

Fixed Fixed::operator-(const Fixed& value) {
	return this->toFloat() - value.toFloat();
};

Fixed Fixed::operator*(const Fixed& value) {
	return this->toFloat() * value.toFloat();
};

Fixed Fixed::operator/(const Fixed& value) {
	return this->toFloat() / value.toFloat();
};

Fixed Fixed::operator++( void ) {
	++this->fixedPoint;
	return *this;
};

Fixed Fixed::operator++(int value) {
	(void) value;
	Fixed tmp = *this;
	this->fixedPoint++;
	return tmp;
};

Fixed Fixed::operator--( void ) {
	--this->fixedPoint;
	return *this;
};

Fixed Fixed::operator--(int value) {
	(void) value;
	Fixed tmp = *this;
	this->fixedPoint--;
	return tmp;
};
