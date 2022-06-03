/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:30:28 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/03 18:47:06 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

	contact::contact(){}

	contact::~contact(){}

	contact::contact (std::string first_name,std::string last_name,std::string nickname,int phone_number ,std::string darkest_secret, int contact_index, int contact_position)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
		this->phone_number = phone_number;
		this->darkest_secret = darkest_secret;
		this->contact_position = contact_position;
		this->contact_index = contact_index;
	}

	std::string contact::get_first_name(void)
	{
		return (this->first_name);
	}

	void contact::set_first_name(std::string first_name)
	{
		this->first_name = first_name;
	}

	std::string contact::get_last_name(void)
	{
		return (this->last_name);
	}

	void contact::set_last_name(std::string last_name)
	{
		this->last_name = last_name;
	}

	void contact::set_nickname(std::string nickname)
	{
		this->nickname = nickname;
	}

	std::string contact::get_nickname(void)
	{
		return (this->nickname);
	}

	void contact::set_phone_number(int phone_number)
	{
		this->phone_number = phone_number;
	}

	int contact::get_phone_number(void)
	{
		return (this->phone_number);
	}

	void contact::set_darkest_secret(std::string darkest_secret)
	{
		this->darkest_secret = darkest_secret;
	}

	std::string contact::get_darkest_secret(void)
	{
		return (this->darkest_secret);
	}

	int contact::get_contact_index(void)
	{
		return (this->contact_index);
	}

	int contact::get_contact_position() {
		return (this->contact_position);
	}

	void contact::set_contact_position(int position){
		this->contact_position = position;
	};
	void contact::set_contact_index(int index) {
		this->contact_index = index;
	}
