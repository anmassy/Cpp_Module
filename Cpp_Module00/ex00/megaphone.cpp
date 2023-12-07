/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:49:01 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/07 11:33:48 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        while (av[++i])
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char) toupper(av[i][j]);
        }
    std::cout << std::endl;
    return (1);
}
