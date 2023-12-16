/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:51:06 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 11:56:59 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

    private :
        std::string _name;
        Weapon* _Weapon;
    public :
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void	setWeapon(Weapon& weapon);
};

#endif