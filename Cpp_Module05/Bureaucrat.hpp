/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:09:19 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/12 19:54:55 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
 
class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        
        Bureaucrat    &operator=(Bureaucrat const &rhs);
        
        std::string getName(void) const;
        int getGrade(void) const;
        void    gradeIncrement(void);
        void    gradeDecrement(void);
        
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
        int                 _grade;
};

std::ostream& operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif