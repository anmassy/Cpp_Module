/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/12 21:55:33 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int ac, char **av) {
    
    /*create bureaucrat*/
    try {
        Bureaucrat souplexman("Antoine", 22);
        std::cout << souplexman << std::endl;
        souplexman.gradeDecrement();
        std::cout << souplexman << std::endl;
        souplexman.gradeIncrement();
        souplexman.gradeIncrement();
        std::cout << souplexman << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    /*errors*/
    try {
        Bureaucrat human("momo", 151);
        std::cout << human << std::endl;
        // Bureaucrat Alien("bzzz", 0);
        // std::cout << arabe << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
