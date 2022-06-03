/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:30:36 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/03 19:01:35 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

	phone_book::phone_book()
	{
			std::cout << "Phonebook creado" << std::endl;
	}
	
	phone_book::~phone_book(){}

	void phone_book::add(contact contact, int index)
	{
		int oldest_contact = 0;
		
		this->contacts[index] = contact;
		if (index > 8)
		{
			int i;

			i = 1;
			oldest_contact = this->contacts[0].get_contact_index();
			while(i != 8)
			{
				if (this->contacts[i].get_contact_index() < oldest_contact)
					oldest_contact = this->contacts[i].get_contact_index();
				i++;
			}
			this->contacts[i] = contact;
		}
		
	}

	void phone_book::search(void)
	{
		std::cout << this->contacts[0].get_first_name() << std::endl;
	} 
	
/*
class phoneBook
{









}
*/