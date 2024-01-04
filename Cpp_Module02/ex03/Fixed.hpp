/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:27:56 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 14:30:28 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private :
		int _value;
		static const int _fract = 8;
	
	public :
		Fixed(void);
		Fixed (const int n);
		Fixed (const float n);
		Fixed(const Fixed &copy);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed(void);
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
		int toInt( void ) const;
		float toFloat( void ) const;

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed   operator+( const Fixed &rhs ) const ;
    	Fixed   operator-( const Fixed &rhs ) const ;
    	Fixed   operator*( const Fixed &rhs ) const ;
    	Fixed   operator/( const Fixed &rhs ) const ;
	
    	Fixed&  operator++( void );
    	Fixed   operator++( int );
    	Fixed&  operator--( void );
    	Fixed   operator--( int );

		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);//added

#endif