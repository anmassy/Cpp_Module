/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:10:32 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/13 11:20:29 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>

class replace {

	private :
		std::string _s1;
		std::string _s2;
		
	public :
	replace(std::string filename, std::string s1, std::string s2);
	~replace(void);
	std::string copy_paste(std::string filename);
};

#endif