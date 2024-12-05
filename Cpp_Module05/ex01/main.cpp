/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/05 10:07:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int ac, char **av) {
	try {
		Bureaucrat bureaucrat("Antoine", 15);
		bureaucrat.gradeDecrement();
		std::cout << bureaucrat << std::endl;

		Form form("Alex", 95, 50);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;

		Form form2("Alice", 12, 1);
		bureaucrat.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what();
	}
	return (0);
}
