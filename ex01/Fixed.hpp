/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/02 17:59:15 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
# define _FIXED_

#include <iostream>
#include <iomanip> 
#include <cmath>

class Fixed {
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
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif
