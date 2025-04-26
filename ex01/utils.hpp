#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include <cstdlib>

void	print_custom_setw(std::string str);
std::string get_input(std::string str);
bool	only_space(std::string str);
std::string trim_front_space(std::string str);
bool	is_numeric_range(std::string str);
std::string get_input_number(std::string str);

#endif
