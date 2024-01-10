/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/10 15:50:48 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
# define _FIXED_

#include <iostream>
#include <iomanip> 
#include <cmath>

class Fixed {
private:
	int fixedPoint;
	static const int fractionalBits = 8;
	
public:
	Fixed(void);
	Fixed(const int& input);
	Fixed(const float& input);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& input);
	~Fixed(void);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

	// 6 comparison
	bool operator>(Fixed value);
	bool operator<(Fixed value);
	bool operator>=(Fixed value);
	bool operator<=(Fixed value);
	bool operator==(Fixed value);
	bool operator!=(Fixed value);

	// 4 arithmetic
	Fixed operator+(const Fixed& value);
	Fixed operator-(const Fixed& value);
	Fixed operator*(const Fixed& value);
	Fixed operator/(const Fixed& value);

	// 4 increment/decrement
	Fixed operator++( void );
	Fixed operator++(int value);
	Fixed operator--( void );
	Fixed operator--(int value);

};


std::ostream& operator<<(std::ostream& out, Fixed const& fixed);

#endif
