/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:03:20 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/04 12:07:24 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap person("June");
    
    person.takeDamage(20);
    person.attack("bocal");
    person.beRepaired(15);
    /* June will die */
    person.takeDamage(1000);
    return (0);
}