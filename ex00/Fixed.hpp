/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/02 17:39:36 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
# define _FIXED_

#include <iostream>

class Fixed {
	int fixedPoint;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed& input);
	Fixed& operator=(const Fixed& input);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif