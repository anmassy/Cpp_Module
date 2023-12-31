/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:08 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/13 11:03:18 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void) {
    
    std::cout << std::endl;
    std::cout << "╔══════════════════════════════════╗" << std::endl;
    std::cout << "║    Welcome to your PhoneBook !   ║" << std::endl;
    std::cout << "║                                  ║" << std::endl;
    std::cout << "║ ADD    : To add a contact.       ║" << std::endl;
    std::cout << "║ SEARCH : for search a contact.   ║" << std::endl;
    std::cout << "║ EXIT   : if you want to quite.   ║" << std::endl;
    std::cout << "╚══════════════════════════════════╝" << std::endl;
    std::cout << std::endl;
}

PhoneBook::~PhoneBook(void) {
    
}

int   PhoneBook::add_contact(int index, int aff) {

    std::string choice;
   
   if (std::cin.eof())
            return (-1) ;
    if (aff > 8) {
        std::cout << "╔══════════════════════════════════════════════════════╗" << std::endl;
        std::cout << "║ Warning: if you continue, you will delete a contact. ║" << std::endl;
        while (choice != "yes" || choice != "no") {
            std::cout << "║ yes to continue, no to stop !                        ║" << std::endl; 
            std::cout << "╚══════════════════════════════════════════════════════╝" << std::endl;
            std::getline(std::cin, choice);
            if (choice == "no")
                return (index);
            else if (choice == "yes") {
                index = 1;
                break ;
            }
            if (choice != "yes" || choice != "no") {
                std::cin.clear();
                std::cout << "╔══════════════════════════════════════════════════════╗" << std::endl;
                std::cout << "║ invalid input                                        ║" << std::endl;
            }
        }
    }
    this->_contact[index].init_user();
    std::cout << std::endl;
    return (index);
}

void    PhoneBook::search_contact(int index, int aff) {

    int i = 0;
    std::string input;
    int valid = 0;
    
    if (index == 1) {
        std::cout << "You have no contact" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "╔═════════════════════════════════════════════╗" << std::endl;
    while (++i < aff)
        this->_contact[i].lst_contact(i);
    std::cout << "╚═════════════════════════════════════════════╝" << std::endl;
    std::cout << std::endl;
    while (valid == 0) {
        std::cout << "Please enter a contact number: ";
        std::cin >> input;
        if (std::cin.eof())
            break ;
        i = atoi(input.c_str());
        if (i >= 1 && i <= aff - 1) {
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

    PhoneBook   book;
    std::string input = "";
    static int index = 1;
    static int aff = 1;
    
    while (input.compare("EXIT")) {
        if (!input.compare("ADD")) {
            index = book.add_contact(index, aff);
            if (index < 9)
                index++;
            if (aff < 9)
                aff++;
        }
        else if (!input.compare("SEARCH"))
            book.search_contact(index, aff);
        if (std::cin.eof())
            break ;
        std::cout << ">";
        std::getline(std::cin, input);
    }
    return (0);
}
