/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:27:56 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/18 12:28:04 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {

	private :
		int _value;
		static const int _fract = 8;
	public :
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed (int const const_int);//added
		Fixed (float const const_flaot);//added
		~Fixed(void);
		
		Fixed &	operator=(Fixed const & rhs);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
		int toInt( void ) const;//added
		float toFloat( void ) const;//added

		Fixed & operator<<(Fixed const & rhs);//added
};