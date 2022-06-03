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
#include <string>

int main(int argc, char *argv[])
{	
	contact ct;
	phone_book pb;
	int contact_index;
	int contact_position;
	std::string opt;

	contact_index = 1;
	contact_position = 0;
	while (1)
	{
		std::cout << "Choose your action:\n";
		std::cout << "ADD\n";
		std::cout << "SEARCH\n";
		std::cout << "EXIT\n";
		std::cin>>opt;
		std::cout << opt << std::endl;
		switch () {
			case "ADD":
				std::cout << "Add choosed\n" << std::endl;
				break;
			case "SEARCH":
				std::cout << "Search choosed\n";
				break;
			case "EXIT":
				std::cout << "EXIT\n";
				exit(1);
				break;
			default:
				std::cout << "Wrong mf\n";
				exit(1);
				break;
		}
	}/*
	ct.set_darkest_secret("I love coding");
	ct.set_first_name("Beñat");
	ct.set_last_name("Garrido");
	ct.set_nickname("bgarrido");
	ct.set_phone_number(63358149);
	pb.add(ct, 0);
	pb.search();
	*/

	return (0);
}