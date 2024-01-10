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

Fixed Point::getX( void ) const {
	return this->x;
}

Fixed Point::getY( void ) const {
	return this->y;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed detT = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());
    Fixed alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / detT;
    Fixed beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / detT;
    float gamma = 1.0f - alpha - beta;
	return alpha >= 0.0f && beta >= 0.0f && gamma >= 0.0f;
}
