/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:25:37 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/02 13:15:37 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

///*CONSTRUTOR - DESTRUCTOR*///
Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed (const int n) {
	
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fract;
}

Fixed::Fixed (const float n) {

	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_fract));
}

Fixed::Fixed(const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

///*OPERATOR*///
Fixed &	Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return (o);
}

///*FONCTION*///
int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
}

int Fixed::toInt( void ) const {
	
	return this->_value >> _fract;
}

float Fixed::toFloat( void ) const {

	return static_cast<float>(this->_value) / (1 << this->_fract);
}