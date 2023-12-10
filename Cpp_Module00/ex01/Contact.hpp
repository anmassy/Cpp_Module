/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:32:33 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/10 20:22:13 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        std::string    verif_input(std::string msg);
        void    init_user(void);
        void    lst_contact(int index); 
        std::string    space(int n);
        std::string    too_long(std::string val);
        void    display(void);
        
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
};

#endif