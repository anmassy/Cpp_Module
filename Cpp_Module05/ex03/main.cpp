/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/05 19:51:04 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Création d'un intern
        Intern intern;

        Form* form1 = intern.makeForm("ShrubberyCreationForm", "Home");
        if (form1) {
            Bureaucrat bureaucrat("Antoine", 3);
            bureaucrat.signForm(*form1);
            bureaucrat.executeForm(*form1);
            delete form1;
        }

        Form* form2 = intern.makeForm("RobotomyRequestForm", "Bender");
        if (form2) {
            Bureaucrat bureaucrat("Antoine", 3);
            bureaucrat.signForm(*form2);
            bureaucrat.executeForm(*form2);
            delete form2;
        }

        Form* form3 = intern.makeForm("PresidentialPardonForm", "President");
        if (form3) {
            Bureaucrat bureaucrat("Antoine", 3);
            bureaucrat.signForm(*form3);
            bureaucrat.executeForm(*form3);
            delete form3;
        }
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

