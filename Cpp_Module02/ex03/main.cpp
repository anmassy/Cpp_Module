/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:25:17 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 17:11:47 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15)) == true ) {
    // if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15)) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}