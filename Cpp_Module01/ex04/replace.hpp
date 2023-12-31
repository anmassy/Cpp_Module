/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:10:32 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 12:17:50 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string.h>
#include <iostream>
#include <fstream>

class replace {
	public :
		replace();
		~replace(void);
		std::string copy_paste(std::string filename, std::string s1, std::string s2);
};

#endif