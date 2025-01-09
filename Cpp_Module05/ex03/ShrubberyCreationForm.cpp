/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:25:25 by anmassy           #+#    #+#             */
/*   Updated: 2025/01/09 06:23:43 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Default Shrubbery", 145, 137), _target("Default") {
	// std::cout << "default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), _target(target) {
	// std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {
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
	file << "               ,@@@@@@@,\n";
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	file << "       |o|        | |         | |\n";
	file << "       |.|        | |         | |\n";
	file << "jgs \\/ .\\_\\/\\_\\/__/  ,\\_\\/\\/__\\\\/.  \\_\\/\\/__/_" << std::endl;
	
	file.close();
	std::cout << "Le fichier " << _target << "_shrubbery a été créé avec succès." << std::endl;
}

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.getSigned() << ", sign grade: " << form.getGradeToSign() << ", exec grade: " << form.getGradeToExecute());
}