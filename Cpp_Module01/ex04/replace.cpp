/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:21:17 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 12:30:03 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace() {

}

replace::~replace(){
	
}

std::string replace::copy_paste(std::string filename, std::string s1, std::string s2) {

	if (s1.empty())
		return (filename);
	size_t point = filename.find(s1);
	while (point != std::string::npos) {
		
		filename.erase(point, s1.size());
		filename.insert(point, s2);
		point = filename.find(s1);
	}
	return(filename);
}
