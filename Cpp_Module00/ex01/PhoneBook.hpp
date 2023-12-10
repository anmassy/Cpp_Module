/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:50 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/10 20:24:48 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        int    add_contact(int index, int aff);
        void    search_contact(int index, int aff);
                
    private:
        Contact _contact[9];
        
};

#endif