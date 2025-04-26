#include "Contact.hpp"

Contact::Contact()
{
	_filled = false;
	_idx = -1;
}

Contact::Contact(std::string first_name, std::string last_name,
	std::string nick_name, std::string phone_number, std::string darkest_secret, int idx)
{
	First_Name = first_name;
	Last_Name = last_name;
	Nick_Name = nick_name;
	Phone_Number = phone_number;
	Darkest_Secret = darkest_secret;
	_idx = idx;
	_filled = true;
}

Contact::~Contact()
{
}

std::string Contact::get_first_name(void)
{
	return (First_Name);
}

std::string Contact::get_last_name(void)
{
	return (Last_Name);
}

std::string Contact::get_nick_name(void)
{
	return (Nick_Name);
}

std::string Contact::get_phone_number(void)
{
	return (Phone_Number);
}

std::string Contact::get_darkest_secret(void)
{
	return (Darkest_Secret);
}
