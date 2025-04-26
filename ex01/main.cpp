#include "main.hpp"

int	main(void)
{
	PhoneBook	phonebook;

	std::string input;
	while (1)
	{
		std::cout << "Enter Command(ADD/SEARCH/EXIT): ";
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout <<std::endl << "EOF was inputted" << std::endl;
			exit (0);
		}
		if (input == "ADD")
		{
			add_to_phonebook(&phonebook);
		}
		else if (input == "SEARCH")
		{
			search_in_phonebook(&phonebook);
		}
		else if (input == "EXIT")
		{
			exit(0);
		}
		else
			std::cout << "Invalid Keyword!!" << std::endl;
	}
}

void	search_in_phonebook(PhoneBook *phonebook)
{
	int	input_idx;

	std::string str_idx;
	if (phonebook->print_search())
	{
		while (1)
		{
			std::cout << "Input Index Number: ";
			getline(std::cin, str_idx);
			if (std::cin.eof())
			{
				std::cout <<std::endl << "EOF was inputted" << std::endl;
				exit (0);
			}
			if (is_numeric_range(str_idx) == false)
			{
				std::cout << "Must Input Valid Number!!" << std::endl;
				return ;
			}
			std::istringstream iss(str_idx);
			iss >> input_idx;
			if (iss.fail())
			{
				std::cout << "Out of int range!!" << std::endl;
				return ;
			}
			phonebook->search(input_idx);
			break;
		}
	}
	else
		std::cout << "No Data in PhoneBook!!" << std::endl;
}

void	add_to_phonebook(PhoneBook *phonebook)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	first_name = get_input("[First Name]: ");
	last_name = get_input("[Last Name]: ");
	nick_name = get_input("[Nick Name]: ");
	phone_number = get_input_number("[Phone Number]: ");
	darkest_secret = get_input("[Darkest Secret]: ");
	phonebook->add(first_name, last_name, nick_name, phone_number,
		darkest_secret);
}


