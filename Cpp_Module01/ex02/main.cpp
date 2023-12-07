/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:07:25 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 13:48:05 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {

    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << &s << " > " << s << std::endl;
    std::cout << stringPTR << " > " << *stringPTR << std::endl;
    std::cout << &stringREF << " > " << stringREF << std::endl;
    return (0);
}
