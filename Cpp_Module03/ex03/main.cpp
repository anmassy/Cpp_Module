/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:03:20 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/07 15:40:04 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap person("June");
    
    person.takeDamage(20);
    person.attack("bocal");
    person.beRepaired(15);
    /* June will die */
    person.takeDamage(1000);
    return (0);
}