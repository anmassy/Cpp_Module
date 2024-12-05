/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:25:25 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/05 12:39:02 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Default Shrubbery", 145, 137) {
	// std::cout << "default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137) {
	// std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	// std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	// std::cout << "default ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	// std::cout << "Copy ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.GetTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::GetTarget(void) const {
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream file(this->_target + "_shrubbery");
	file << "               ,@@@@@@@,\n" << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n" << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n" << std::endl;
	file << "       |o|        | |         | |\n" << std::endl;
	file << "       |.|        | |         | |\n" << std::endl;
	file << "jgs \\/ .\\_\\/\\_\\/__/  ,\\_\\/\\/__\\\\/.  \\_\\/\\/__/_" << std::endl;
	file.close();
// std::cout << file << std::endl;
}
