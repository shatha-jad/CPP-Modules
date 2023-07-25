/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:57:45 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/23 17:13:01 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"   

int main (void)
{
    Zombie *Z = newZombie("Creep1");
    Z->announce();
    delete Z;
    randomChump("Creep2");
}
