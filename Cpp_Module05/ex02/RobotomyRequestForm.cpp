/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:32:02 by anmassy           #+#    #+#             */
/*   Updated: 2025/01/09 06:21:51 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Default Robotomy", 72, 45) {
	// std::cout << "default RobotomyRequestForm constructor called" << std::endl;
	srand(static_cast<unsigned int>(time(0)));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), _target(target){
	// std::cout << "RobotomyRequestForm constructor called" << std::endl;
	srand(static_cast<unsigned int>(time(0)));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy) {
	// std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	// std::cout << "default RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	// std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.GetTarget();
	return (*this);
}

std::string	RobotomyRequestForm::GetTarget(void) const {
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int i = rand();
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	if (i % 2 == 0)
		std::cout << "MMMH EUUUH " << this->_target << "is robotomized !!" << std::endl;
	else
		std::cout << "OUF " << this->_target << "is an human !!" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form) {
	return (str << form.getName() << " form, signed: " << form.getSigned() << ", sign grade: " << form.getGradeToSign() << ", exec grade: " << form.getGradeToExecute());
}
