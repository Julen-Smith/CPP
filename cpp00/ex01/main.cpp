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



void print_menu(void)
{
	std::cout << "Choose your action (Input the name):" << std::endl;
	std::cout << "	1. ADD" << std::endl;
	std::cout << "	2. SEARCH" << std::endl;
	std::cout << "	3. EXIT" << std::endl;
}


int main(void)
{
	char response[MAX_NAME_LEN]; 
	phone_book pb;
	int contact_index;
	
	contact_index = 0;
	while (true)
	{
		int option;
		
		option = 0;
		
		print_menu();
		std::cin.getline(response,MAX_NAME_LEN);
	
		if (!strcmp(response,"ADD"))
			option = 1;
		else if (!strcmp(response,"SEARCH"))
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
	}
}