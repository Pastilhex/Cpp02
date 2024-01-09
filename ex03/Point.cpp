/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:17:28 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:43:35 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
}

Point::Point( const float a, const float b) : x(Fixed(a)), y(Fixed(b)) {
}

Point::Point(const Point& copy) {
	*this = copy;
}

Point& Point::operator=(const Point& input) {
    if (this != &input) {
		(Fixed)this->x = input.x;
		(Fixed)this->y = input.y;
	}
    return *this;
}

Point::~Point( void ) {
	
}

