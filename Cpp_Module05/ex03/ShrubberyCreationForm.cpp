/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:15:05 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/19 13:39:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("_shrubbery", 145, 137), _target("default") {
	// std::cout << "default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("_shrubbery", 145, 137), _target(target) {
	// std::cout << "basic ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {
	// std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	// std::cout << "default ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	// std::cout << "Copy ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream file(this->_target + "_shrubbery" );
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
}
