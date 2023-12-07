/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:10:01 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 11:39:12 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

    int i = 0;
    Zombie *Zomb = new Zombie[N];
    while (i < N)
        Zomb[i++].getname(name);
    return (Zomb);
}