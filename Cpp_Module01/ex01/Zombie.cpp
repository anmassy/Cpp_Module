/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:47:46 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 11:37:44 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

}

Zombie::~Zombie(void) {

    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void    Zombie::announce(void) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void     Zombie::getname(std::string name) {

    this->_name = name;
} 