/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:39:13 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/05 19:44:45 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"



int print_menu(void)
{
	std::cout << "Choose your action (select number:" << std::endl;
	std::cout << "	1. ADD" << std::endl;
	std::cout << "	2. SEARCH" << std::endl;
	std::cout << "	3. EXIT" << std::endl;
}


int main(int argc, char *argv[])
{
	char response[MAX_NAME_LEN]; 
	phone_book pb;
	int contact_index;
	int contact_position;
	
	contact_index = 0;
	while (true)
	{
		int option;
		
		option = 0;
		
		print_menu();
		std::cin.getline(response,MAX_NAME_LEN);
	
		if (!strcmp(response,"1"))
			option = 1;
		else if (!strcmp(response,"2"))
			option = 2;
			
		switch(option)
		{
			default : 
				exit(0);	
			case 1:
				pb.add(pb.create_contact(),contact_index);
				contact_index++;
				break;
			case 2:
				pb.search(contact_index);
				break;
		}
			
		
		//Introducir al objeto.
	//	pb.contacts[0].set_first_name((std::string)response); 
	//	std::cout << pb.contacts[0].get_first_name() << std::endl;
	

		
		/*
		switch (option) {
			case 1:

			break;
			case 2:

			

		
		
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
		*/
	
	
	}
}