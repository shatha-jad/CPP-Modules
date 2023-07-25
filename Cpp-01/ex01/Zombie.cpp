/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:39:00 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/27 15:40:25 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
    std::cout << _name << ": NOOoOOOOOoooOo BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce()
{
    std::cout<< _name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

