/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:24:19 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 17:07:54 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {

	private :
		const Fixed _x;
                const Fixed _y;
	
	public :
                Point();
                Point(const float x, const float y);
                Point(const Point &src);
                ~Point();

                Point&  operator=(const Point &rhs);

                Fixed getX(void) const ;
                Fixed getY(void) const ;

};

bool bsp( Point const a, Point const b, Point const c, Point const p );

#endif