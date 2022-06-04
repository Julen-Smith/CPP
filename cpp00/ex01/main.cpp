/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:39:13 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/03 18:49:05 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main(int argc, char *argv[])
{
	phone_book pb;
	int contact_index;
	int contact_position;
	int opt;
	contact ct;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	int phoneNumber;
	std::string darkestSecret;

	contact_index = 1;
	contact_position = 0;
	while (1)
	{
		std::cout << "Choose your action (select number:" << std::endl;
		std::cout << "	1. ADD" << std::endl;
		std::cout << "	2. SEARCH" << std::endl;
		std::cout << "	3. EXIT" << std::endl;
		std::cin>>opt;
		std::cout << opt << std::endl;
		switch (opt) {
			case 1:
				std::cout << "Insert name: " << std::endl;
				std::cin >> firstName;
				ct.set_first_name(firstName);
				std::cout << "Insert last name: " << std::endl;
				std::cin >> lastName;
				ct.set_last_name(lastName);
				std::cout << "Insert nickname: " << std::endl;
				std::cin >> nickname;
				ct.set_nickname(nickname);
				std::cout << "Insert phone number: " << std::endl;
				std::cin >> phoneNumber;
				ct.set_phone_number(phoneNumber);
				std::cout << "Insert darkest secret: " << std::endl;
				std::cin >> darkestSecret;
				ct.set_darkest_secret(darkestSecret);
				ct.set_contact_index(contact_index);
				ct.set_contact_position(contact_position);
				pb.add(ct, contact_position);
				pb.set_size(contact_position);
				contact_position++;
				contact_index++;
				break;
			case 2:
				pb.search();
				break;
			case 3:
				exit(1);
			default:
				std::cout << "Wrong mf\n";
				exit(1);
		}
	}
}