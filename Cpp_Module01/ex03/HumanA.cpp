/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:45:25 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/12 18:54:01 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp";

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon) {
       
}

HumanA::~HumanA(void) {
    
}

void    HumanA::attack(void) {
    
    std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}