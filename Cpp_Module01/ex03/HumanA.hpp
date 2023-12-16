/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:39:31 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 11:56:50 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

    private :
        std::string _name;
        Weapon& _Weapon;
    public :
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA(void);
        void    attack(void);
};

#endif