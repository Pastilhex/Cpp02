/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:00:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/10 17:04:06 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point p(2.5f, 0.5f);
	Point a(0.0f, 0.0f);
	Point b(2.0f, 0.0f);
	Point c(1.0f, 2.0f);

	// if (bsp(Point(0.0f,0.0f), Point(2.0f,0.0f), Point(1.0f,2.0f), Point(1.0f,1.0f))) {
    if (bsp(a, b, c, p)) {
        std::cout << "O ponto está dentro do triângulo.\n";
    } else {
        std::cout << "O ponto está fora do triângulo.\n";
    }
	return 0;
}
