#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include <iostream>
#include <strings.h>

class contact
{
	public:
		contact();
		contact(std::string first_name,std::string last_name,std::string nickname,int phone_number, std::string darkest_secret);
		~contact();
		std::string get_first_name(void);
		void set_first_name(std::string first_name);
		std::string get_last_name(void);
		void set_last_name(std::string last_name);
		void get_nickname(std::string nickname);
		std::string set_nickname(void);
		void set_phone_number(int phone_number);
		int get_phone_number(void);
		void set_darkest_secret(std::string darkest_secret);
		std::string get_darkest_secret(void);
	
	private:
		std::string first_name;
	 	std::string last_name;
		std::string nickname;
	 	int phone_number;
	 	std::string darkest_secret;
};

class phone_book
{
	public:
		phone_book();
		~phone_book();
		void add(contact contact, int index);
		void search(void);
	private:
		contact contacts[8];
};

#endif 