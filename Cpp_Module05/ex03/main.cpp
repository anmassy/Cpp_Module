/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/19 14:00:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(int ac, char **av) {
    try {
        Bureaucrat bureaucrat("Antoine", 3);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n( Shrubbery )" << std::endl;
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);

        std::cout << "\n( Robotomy )" << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        
        std::cout << "\n( President )" << std::endl;
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
