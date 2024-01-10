/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:17:28 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/10 16:58:14 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
}

Point::Point( const float a, const float b) : x(Fixed(a)), y(Fixed(b)) {
}

Point::Point(const Point& copy)  : x(copy.x), y(copy.y) {
	*this = copy;
}

Point& Point::operator=(const Point& input){
    if (this != &input) {
 		(Fixed)this->x = input.x;
 		(Fixed)this->y = input.y;
	}
    return *this;
}

Point::~Point( void ) {
}

float Point::getX( void ) const {
	return this->x.getRawBits();
}

float Point::getY( void ) const {
	return this->y.getRawBits();
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float detT = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());
    float alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / detT;
    float beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / detT;
    float gamma = 1.0f - alpha - beta;
	return alpha >= 0.0f && beta >= 0.0f && gamma >= 0.0f;
}
