/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:24:50 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/26 15:02:05 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class directory {
    public:
        directory(void);
        ~directory(void);
        void    add_contact(int index);
        void    search_contact(int index);
                
    private:
        profil _contact[9];
        
};

#endif