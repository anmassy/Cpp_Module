/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:27:56 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/02 13:15:28 by anmassy          ###   ########.fr       */
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
		Fixed (const int n);//added
		Fixed (const float n);//added
		Fixed(const Fixed &copy);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed(void);
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
		int toInt( void ) const;//added
		float toFloat( void ) const;//added

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);//added

#endif