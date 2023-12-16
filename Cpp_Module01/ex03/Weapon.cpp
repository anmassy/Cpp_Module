/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:55:35 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 11:46:44 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	
	this->setType(type);
}

Weapon::~Weapon(void) {
	
}

std::string&	Weapon::getType(void) {
	
	return (this->_type);
}

void    Weapon::setType(std::string type) {
	
	this->_type = type;
}