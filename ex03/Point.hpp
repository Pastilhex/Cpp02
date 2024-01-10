/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:17:59 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:34:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_
# define _POINT_

#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;

public:
	Point( void );
	Point( const float a, const float b);
	Point(const Point& copy);
	Point& operator=(const Point& input);
	~Point( void );
	Fixed getX( void ) const;
	Fixed getY( void ) const;

	float operator-(const Fixed& value);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
