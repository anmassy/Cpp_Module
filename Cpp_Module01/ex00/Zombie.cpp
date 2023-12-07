/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:47:46 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 10:59:29 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string getname) {

    this->_name = getname;
}

Zombie::~Zombie(void) {

    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void    Zombie::announce(void) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
