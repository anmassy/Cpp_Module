/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:50 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/07 12:09:18 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class directory {
    public:
        directory(void);
        ~directory(void);
        int    add_contact(int index, int aff);
        void    search_contact(int index, int aff);
                
    private:
        profil _contact[9];
        
};

#endif