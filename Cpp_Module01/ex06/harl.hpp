/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:46:33 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 13:25:47 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class harl {

	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public :
		harl(void);
		~harl(void);
		
		void	complain(std::string level);
};

typedef void (harl::*t_fonc)(void);

#endif