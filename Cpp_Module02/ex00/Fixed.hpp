/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:27:56 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 14:26:33 by anmassy          ###   ########.fr       */
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
		~Fixed(void);
/*Une surcharge de l’opérateur d’affectation.*/

		int	getRawBits(void) const;
		void setRawBits(int const raw);
};