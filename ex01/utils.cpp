# include"utils.hpp"

void	print_custom_setw(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << std::setw(10) << str << "|";
	}
	else
	{
		std::cout << str.substr(0,9) << "." << "|";
	}
}

std::string get_input(std::string str)
{
	std::string input;
	while (input.length() == 0 || only_space(input))
	{
		std::cout << str;
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout <<std::endl << "EOF was inputted" << std::endl;
			exit (0);
		}
		input = trim_front_space(input);
	}
	return (input);
}

std::string get_input_number(std::string str)
{
	std::string input;
	while (1)
	{
		std::cout << str;
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout <<std::endl << "EOF was inputted" << std::endl;
			exit (0);
		}
		input = trim_front_space(input);
		if (input.length() == 0 || only_space(input))
			continue;
		if (is_numeric_range(input))
			return (input);
		else
			std::cout << "Must Input Number" << std::endl;
	}
	return (input);
}

std::string trim_front_space(std::string str)
{
	int	len;
	size_t	start_pos;

	len = str.length();
	start_pos = 0;
	while(std::isspace(static_cast<unsigned char>(str[start_pos])) && start_pos < str.size())
	{
		start_pos += 1;
	}
	return (str.substr(start_pos, len));
}

bool	only_space(std::string str)
{
	size_t start_pos = 0;
	while(start_pos < str.size())
	{
		if (!std::isspace(static_cast<unsigned char>(str[start_pos])))
			return (false);
		start_pos += 1;
	}
	return (true);
}

bool	is_numeric_range(std::string str)
{
	size_t start_pos = 0;
	while(start_pos < str.size())
	{
		if (!('0' <= str[start_pos] && str[start_pos] <= '9'))
			return (false);
		start_pos += 1;
	}
	return (true);
}
