/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:47:15 by anmassy           #+#    #+#             */
/*   Updated: 2024/06/03 10:53:20 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _gradeToSign(50), _gradeToExecute(150) {
	// std::cout << "default Form constructor called" << std::endl;
	this->_signed = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	// std::cout << "basic Form constructor called" << std::endl;
	this->_signed = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
	// std::cout << "Copy Form constructor called" << std::endl;
	*this = copy;
}

Form::~Form() {
	// std::cout << "default Form destructor called" << std::endl;
}

Form& Form::operator=(Form const &rhs) {
	// std::cout << "Copy Form assignment operator called" << std::endl;
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string Form::getName(void) const {
	return (this->_name);
}

bool Form::getSigned(void) const {
	return (this->_signed);
}

int Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High Exception\n");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low Exception\n");
}

void Form::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}


std::ostream& operator<<(std::ostream &o, const Form &rhs)
{
	o << "/* Form information */" << std::endl
	<< "form name :" << rhs.getName() << std::endl
	<< "form Signed :" << rhs.getSigned() << std::endl
	<< "form gradeToSign :" << rhs.getGradeToSign() << std::endl
	<< "form gradeToExecute :" << rhs.getGradeToExecute() << std::endl;
	return (o);
}