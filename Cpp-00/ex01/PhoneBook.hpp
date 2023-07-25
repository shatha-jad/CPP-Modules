/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:17:27 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/22 17:18:32 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact		_contacts[8];
		int			_index;
		int			_maxIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(Contact contact);
		void		searchContact(void);
		void		printContacts(void);
};

#endif