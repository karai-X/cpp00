#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "utils.hpp"
# include <iomanip>
# include <string>

class PhoneBook
{
  private:
    int _idx;
    int _idx_array;

  public:
    Contact Contact_Array[8];
    PhoneBook();
    void add(std::string first_name, std::string last_name,
             std::string nick_name, std::string phone_number,
             std::string darkest_secret);
    bool print_search();
    void search(int search_idx);
    void print(Contact contact);
};

#endif
