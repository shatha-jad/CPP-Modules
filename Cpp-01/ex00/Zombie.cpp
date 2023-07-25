/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:57:14 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/23 17:13:56 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << ": NOOoOOOOOoooOo BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::announce()
{
    std::cout<< _name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}