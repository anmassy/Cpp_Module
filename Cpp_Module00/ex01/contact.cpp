/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:12 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/04 19:00:15 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

profil::profil(void) {

}

profil::~profil(void) {
    
}
std::string profil::verif_input(std::string msg) { //ici invalid input
    
    std::string input = "";
    int valid = 0;
    int T = 1;

    std::cout << msg;
    while (valid == 0) {
        getline(std::cin, input);
        if (T == 1 && msg == "Enter your first name : ") {
            T = 0;
        }
        else if (input == "") {
            std::cin.clear();
            std::cout << "invalid input" << std::endl;
            std::cout << msg;

        }
        else  
            valid = 1;
    }
    return (input);
}

void    profil::init_user(void) {

    this->_first_name = verif_input("Enter your first name : ");
    this->_last_name = verif_input("Enter your last name : ");
    this->_nickname = verif_input("Enter your nickname : ");
    this->_phone_number = verif_input("Enter your phone number : ");
    this->_darkest_secret = verif_input("Enter your darkest secret : ");
}

std::string   profil::space(int n) {

    std::string temp;
    
    while (n--)
        temp.append(" ");
    return (temp);
}

std::string    profil::too_long(std::string val)
{
    if (val.size() > 10) {
        val.resize(10);
        val[val.size() - 1] = '.';
    }
    return (val);
}

void    profil::lst_contact(int index) {
    
    std::string info;

    info = index;
    std::cout << "║" << "|" << space(10 - info.size()) << index;
    info = too_long(this->_first_name);
    std::cout << "|" << space(10 - info.size()) << info;
    info = too_long(this->_last_name);
    std::cout << "|" << space(10 - info.size()) << info;
    info = too_long(this->_nickname);
    std::cout << "|" << space(10 - info.size()) << info;
    std::cout <<  "|" << "║" << std::endl;
}

void    profil::display(void) {
    
    std::cout << "---------------CONTACT----------------" << std::endl;
    std::cout << this->_first_name << std::endl;
    std::cout << this->_last_name << std::endl;
    std::cout << this->_nickname << std::endl;
    std::cout << this->_phone_number << std::endl;
    std::cout << this->_darkest_secret << std::endl;
}