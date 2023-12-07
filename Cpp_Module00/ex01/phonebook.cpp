/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:08 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/04 19:04:00 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <cstdlib>

directory::directory(void) {
    
    std::cout << std::endl;
    std::cout << "╔══════════════════════════════════╗" << std::endl;
    std::cout << "║    Welcome to your phonebook !   ║" << std::endl;
    std::cout << "║                                  ║" << std::endl;
    std::cout << "║ ADD    : To add a contact.       ║" << std::endl;
    std::cout << "║ SEARCH : for search a contact.   ║" << std::endl;
    std::cout << "║ EXIT   : if you want to quite.   ║" << std::endl;
    std::cout << "╚══════════════════════════════════╝" << std::endl;
    std::cout << std::endl;
}

directory::~directory(void) {
    
}

void    directory::add_contact(int index) {

    std::string choice;
   
    if (index > 8) {
        std::cout << "if you create a new profile, the first contact will be destroy" << std::endl;
        while (choice != "yes" || choice != "no") {
            std::cout << "tape yes or no" << std::endl; 
            std::cin >> choice;
            if (choice == "no")
                return ;
            else if (choice == "yes") {
                index = 1;
                break ;
            }
            if (choice != "yes" || choice != "no") {
                std::cin.clear();
                std::cout << "invalid input" << std::endl;
            }
        }
    }
    this->_contact[index].init_user();
    std::cout << std::endl;
}

void    directory::search_contact(int index) {

    int i = 0;
    std::string input;
    int valid = 0;
    
    if (index == 1) {
        std::cout << "we have no contact" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "╔═════════════════════════════════════════════╗" << std::endl;
    while (++i < index)
        this->_contact[i].lst_contact(i);
    std::cout << "╚═════════════════════════════════════════════╝" << std::endl;
    std::cout << std::endl;
    while (valid == 0) {
        if (index == 2)
            std::cout << "Please enter the contact index 1: ";
        else
            std::cout << "Please enter the contact index 1-" << index - 1 << ": ";
        std::cin >> input;
        i = atoi(input.c_str());
        if (i >= 1 && i <= index - 1) {
            this->_contact[i].display();
            valid = 1;
        }
        else {
            std::cin.clear();
            std::cout << "invalid input" << std::endl;
        }
    }
    std::cout << std::endl;
    return ;
}

int main() {

    directory   book;
    std::string input = "";
    static int index = 1;
    
    while (input.compare("EXIT")) {
        if (!input.compare("ADD")) {
            book.add_contact(index);
            if (index < 9)
                index++;
        }
        else if (!input.compare("SEARCH"))
            book.search_contact(index);
        std::cout << ">";
        std::cin >> input;
    }
    return (0);
}
