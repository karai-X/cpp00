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
	int	start_pos;

	len = str.length();
	start_pos = 0;
	for (char c : str)
	{
		if (!std::isspace(static_cast<unsigned char>(c)))
			break ;
		start_pos += 1;
	}
	return (str.substr(start_pos, len));
}

bool	only_space(std::string str)
{
	for (char c : str)
	{
		if (!std::isspace(static_cast<unsigned char>(c)))
			return (false);
	}
	return (true);
}

bool	is_numeric_range(std::string str)
{
	for (char c : str)
	{
		if (!('0' <= c && c <= '9'))
			return (false);
	}
	return (true);
}
