/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:18:40 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/22 17:18:48 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void) {
	PhoneBook	phoneBook;
	std::string	input;
	Contact		contact;

	while (1) {
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|        Commands: ADD, SEARCH, EXIT        |" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "Enter a Command: ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT") {
			break ;
		} else if (input == "ADD") {
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setPhoneNumber();
			contact.setDarkestSecret();
			phoneBook.addContact(contact);
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		}
	}
	return (0);
}