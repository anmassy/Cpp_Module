/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:59:58 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/16 11:53:17 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

 
class Bureaucrat;

class Form {
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        ~Form();
        
        Form    &operator=(Form const &rhs);
        
        std::string getName(void) const;
        bool getSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;

        void beSigned(Bureaucrat bureaucrat);
        
	    class GradeTooHighException : public std::exception {
	    public:
	    	const char *what(void) const throw();
	    };
	    class GradeTooLowException : public std::exception {
	    public:
	    	const char *what(void) const throw();
	    };

    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

};

std::ostream& operator<<(std::ostream &o, const Form &rhs);

#endif