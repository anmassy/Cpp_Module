/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:09:19 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/10 19:22:30 by anmassy          ###   ########.fr       */
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
        
    private:
        const std::string   _name;
        int                 _grade;
};

#endif