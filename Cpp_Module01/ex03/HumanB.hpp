/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:51:06 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/12 18:53:18 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

    private :
        Weapon* _Weapon;
        std::string _name;
    public :
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
};

#endif