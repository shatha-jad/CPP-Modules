/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:17:00 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/26 20:17:01 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Person;

	Person.complain("DEBUG");
	Person.complain("INFO");
	Person.complain("WARNING");
	Person.complain("ERROR");
}