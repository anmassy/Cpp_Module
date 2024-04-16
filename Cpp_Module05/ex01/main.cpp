/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/16 12:09:44 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int ac, char **av) {
    try {
        Bureaucrat bureaucrat("Antoine", 12);
        bureaucrat.gradeDecrement();
        std::cout << bureaucrat << std::endl;
        Form form("Alex", 12, 0);
        
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what();
    }
    return (0);
}
