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

	phone_book::phone_book(){}
	
	phone_book::~phone_book(){}

	void phone_book::add(contact contact, int index)
	{
		int oldest_contact = 0;

		//std::cout << "INDEX --> " << index
		if (index > 1)
		{
			int i;
			int pos = 0;

			i = 1;
			oldest_contact = this->contacts[0].get_contact_index();
			while(i != 2)
			{
				if (this->contacts[i].get_contact_index() < oldest_contact) {
					oldest_contact = this->contacts[i].get_contact_index();
					pos = i;
				}
					i++;
			}
			contact.set_contact_index(i);
			contact.set_contact_position(index);
			this->contacts[pos] = contact;
		} else
		{
			contact.set_contact_index(index);
			contact.set_contact_position(index + 1);
			this->contacts[index] = contact;
		}
		
	}

	void phone_book::search(void)
	{
		int i;

		i = 0;
		while (i <= this->size) {
			std::cout << this->contacts[i].get_contact_position() << "	|	";
			std::cout << this->contacts[i].get_first_name() << "	|	";
			std::cout << this->contacts[i].get_last_name() << "	|	";
			std::cout << this->contacts[i].get_nickname() << "	|	";
			std::cout << this->contacts[i].get_phone_number() << "	|	";
			std::cout << this->contacts[i].get_darkest_secret() << std::endl;
			i++;
		}
	} 

	void phone_book::set_size(int size) {
		if(this->size == 1)
			return;
		else
			this->size = size;
	}
	int phone_book::get_size() {
		return (this->size);
	}
/*
class phoneBook
{









}
*/