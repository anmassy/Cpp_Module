/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:25:37 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 14:40:27 by anmassy          ###   ########.fr       */
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
	
	return this->_value >> this->_fract;
}

float Fixed::toFloat( void ) const {

	return static_cast<float>(this->getRawBits()) / (1 << this->_fract);
}

///*SIGN*///
bool Fixed::operator>(const Fixed &rhs) const {
	
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const {
	
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const {
	
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const {

	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const {

	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const {

	return (this->getRawBits() != rhs.getRawBits());
}

Fixed   Fixed::operator+( const Fixed &rhs ) const {
	
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-( const Fixed &rhs ) const {
	
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*( const Fixed &rhs ) const {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/( const Fixed &rhs ) const {

	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&  Fixed::operator++( void ) {
	
	++this->_value;
    return *this;
}

Fixed   Fixed::operator++( int ) {

	Fixed tmp( *this );
    tmp._value = this->_value++;
    return tmp;
}

Fixed&  Fixed::operator--( void ) {

	--this->_value;
    return *this;
}

Fixed   Fixed::operator--( int ) {

	Fixed tmp( *this );
    tmp._value = this->_value--;
    return tmp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {

	 if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {

	if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
	
	if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {

	if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}