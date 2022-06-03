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
	contact ct;
	phone_book pb;
	int contact_index;
	int contact_position;

	contact_index = 1;
	contact_position = 0;
	ct.set_darkest_secret("I love coding");
	ct.set_first_name("Beñat");
	ct.set_last_name("Garrido");
	ct.set_nickname("bgarrido");
	ct.set_phone_number(63358149);
	ct.set_contact_index(contact_index);
	ct.set_contact_position(contact_position);
	pb.add(ct, 0);
	pb.search();
	

	


	return (0);
}