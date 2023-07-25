/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:58:52 by sjadalla          #+#    #+#             */
/*   Updated: 2023/04/25 19:19:08 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

int		is_digit(std::string str) {
	int i = 0;
	while (str[i]) {
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	Contact::setFirstName(void) {
	std::string firstName;

	while (1) {
		std::cout << "Enter first name: ";
		if (std::getline(std::cin, firstName)){
	    	if (firstName.length() > 0) {
		    	this->_firstName = firstName;
		    	break ;
		    }
        }
        else
            std::cout << "First name cannot be empty" << std::endl;
	}
}

std::string	Contact::getFirstName(void) {
	return (this->_firstName);
}

void	Contact::setLastName(void) {
	std::string lastName;

	while (1) {
		std::cout << "Enter last name: ";
		if (std::getline(std::cin, lastName)){
	    	if (lastName.length() > 0) {
	    		this->_lastName = lastName;
	    		break ;
	    	}
        }
        else
            std::cout << "Last name cannot be empty" << std::endl;
	}
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

void	Contact::setNickname(void) {
	std::string nickname;

	while (1) {
		std::cout << "Enter nickname: ";
		if (std::getline(std::cin, nickname)){
			if (nickname.length() > 0) {
			this->_nickname = nickname;
			break ;
		    }
        }
        else
            std::cout << "Nickname cannot be empty" << std::endl;
	}
}

std::string	Contact::getNickname(void) {
	return this->_nickname;
}

void	Contact::setPhoneNumber(void) {
	std::string phoneNumber;
	long int	phoneNumberLong;

	while (1) {
		std::cout << "Enter phone number: ";
		if (std::getline(std::cin, phoneNumber)){
        	if (phoneNumber.length() == 9) {
			if (is_digit(phoneNumber)) {
				try {
					phoneNumberLong = std::stol(phoneNumber);
					this->_phoneNumber = phoneNumberLong;
					break ;
				}
				catch (std::exception &e) {
					std::cout << "Phone number error " << e.what()<< std::endl;
				}
			}
            }   
			else
				std::cout << "Phone number must be 9 digits" << std::endl;
        }
        else
			std::cout << "Phone number cannot be empty" << std::endl;
	}
}

long int	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

void	Contact::setDarkestSecret(void) {
	std::string darkestSecret;

	while (1) {
		std::cout << "Enter darkest secret: ";
		if (std::getline(std::cin, darkestSecret)){
            if (darkestSecret.length() > 0) {
                this->_darkestSecret = darkestSecret;
                break;
    		}
        }
        else
            std::cout << "Darkest secret cannot be empty" << std::endl;
	}
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}

void	Contact::printContact(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}