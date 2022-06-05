/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:30:36 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/05 19:50:28 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

	phone_book::phone_book(){}
	
	phone_book::~phone_book(){}

	void phone_book::add(contact contact, int index)
	{
		int oldest_contact = 0;
		
		if (index > 7)
		{
			int i;
			int pos = 0;

			i = 1;
			oldest_contact = this->contacts[0].get_contact_index();
			while(i != 8)
			{
				if (this->contacts[i].get_contact_index() < oldest_contact) {
					oldest_contact = this->contacts[i].get_contact_index();
					pos = i;
				}
					i++;
			}
			contact.set_contact_index(index);
			this->contacts[pos] = contact;
		} else
		{
			contact.set_contact_index(index);
			contact.set_contact_position(index + 1);
			this->contacts[index] = contact;
		}
	}

	void phone_book::search(int index)
	{
		int i;

		i = 0;
		std::cout << "|	Index	|	First Name	|	Last Name	|	Nickname	|" << std::endl;
		while(i != index)
		{
			std::cout << "|	";
			std::cout << this->contacts[i].get_contact_index() + 1<< "	|	";
			if (this->contacts[i].get_first_name().size() > 10)
				std::cout << this->contacts[i].get_first_name().erase(9, this->contacts[i].get_first_name().size()) << "." << "	|	";
			else
				std::cout << this->contacts[i].get_first_name() << "	|	";
			if (this->contacts[i].get_last_name().size() > 10)
				std::cout << this->contacts[i].get_last_name().erase(9, this->contacts[i].get_last_name().size()) << "." << "	|	";
			else
				std::cout << this->contacts[i].get_last_name() << "	|	";
			if (this->contacts[i].get_nickname().size() > 10)
				std::cout << this->contacts[i].get_nickname().erase(9, this->contacts[i].get_nickname().size()) << "." << "	|" << std::endl;
			else
				std::cout << this->contacts[i].get_nickname() << "	|" << std::endl;
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

	contact phone_book::create_contact(void)
	{
		contact contacto;
		char response[MAX_NAME_LEN];

		std::cout << "Insert name: " << std::endl;
		std::cin.getline(response,MAX_NAME_LEN);
		contacto.set_first_name(response);

		std::cout << "Insert last name: " << std::endl;
		std::cin.getline(response,MAX_NAME_LEN);
		contacto.set_last_name(response);
		
		std::cout << "Insert nickname: " << std::endl;
		std::cin.getline(response,MAX_NAME_LEN);
		contacto.set_nickname(response);
		
		std::cout << "Insert phone number: " << std::endl;	
		std::cin.getline(response,MAX_NAME_LEN);
		contacto.set_phone_number(response);
		
		std::cout << "Insert darkest secret: " << std::endl;
		std::cin.getline(response,MAX_NAME_LEN);
		contacto.set_darkest_secret(response);

		return contacto;
	}