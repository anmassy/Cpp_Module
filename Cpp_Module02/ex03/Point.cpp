/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:24:09 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 17:08:17 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point( const Point &src ) : _x(src._x), _y(src._y) {}

Point::~Point() {}

Point&  Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        (Fixed) this->_x = rhs.getX();
        ( Fixed) this->_y = rhs.getY();
    }
    return *this;
}

Fixed Point::getX(void) const {
    return this->_x;
}

Fixed Point::getY(void) const {
    return this->_y;
}