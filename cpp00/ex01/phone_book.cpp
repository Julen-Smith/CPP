/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:30:36 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/03 18:48:40 by jsmith           ###   ########.fr       */
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
		this->contacts[index] = contact; 
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