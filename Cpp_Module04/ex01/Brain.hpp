/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:03:23 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:52:36 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	
	private :
		std::string _ideas[100];
		
	public :
		Brain();
		Brain(const Brain &copy);
		~Brain();

		Brain &operator=(Brain const &rhs);
};

#endif