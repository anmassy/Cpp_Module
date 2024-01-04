/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:03:20 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/04 11:18:42 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap person("June");
    
    person.takeDamage(8);
    person.attack("bocal"); /* attack = 0 becauce he is a peacefull person */
    person.beRepaired(2);
    /* June will die */
    person.takeDamage(9);
    return (0);
}