/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:02:32 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/03 17:10:51 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed   val_abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed zone(Point const a, Point const b, Point const c) {
     return (((a.getX() * (b.getY() - c.getY())) +
             (b.getX() * (c.getY() - a.getY())) +
             (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    
    Fixed abc = val_abs(zone(a, b, c));
    Fixed pab = val_abs(zone(p, a, b));
    Fixed pbc = val_abs(zone(p, b, c));
    Fixed pca = val_abs(zone(p, c, a));
    return (abc == pab + pbc + pca);
}