#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
  _idx_array = 0;
  _idx = 1;
}

void PhoneBook::add(std::string first_name, std::string last_name,
                    std::string nick_name, std::string phone_number,
                    std::string darkest_secret) {
  Contact_Array[_idx_array] = Contact(first_name, last_name, nick_name,
                                      phone_number, darkest_secret, _idx);
  _idx_array = (_idx_array + 1) % 8;
  _idx %= 999999999;
  _idx += 1;
}

bool PhoneBook::print_search(void) {
  int now_idx;
  bool print_flag;
  std::ostringstream oss;
  std::string str;

  print_flag = false;
  std::cout << "     Index|First Name| Last Name| Nick Name|" << std::endl;
  for (int i = 0; i < 8; i++) {
    now_idx = (_idx_array + i) % 8;
    if (Contact_Array[now_idx]._filled) {
      print_flag = true;
	  oss.str("");
	  oss.clear();
      oss << Contact_Array[now_idx]._idx;
      str = oss.str();
      print_custom_setw(str);
      print_custom_setw(Contact_Array[now_idx].get_first_name());
      print_custom_setw(Contact_Array[now_idx].get_last_name());
      print_custom_setw(Contact_Array[now_idx].get_nick_name());
      std::cout << std::endl;
    }
  }
  if (print_flag)
    return (true);
  else
    return (false);
}

void PhoneBook::search(int search_idx) {
  for (int i = 0; i < 8; i++) {
    if (Contact_Array[i]._idx == search_idx) {
      this->print(Contact_Array[i]);
      return;
    }
  }
  std::cout << "The Index is Not Found In PhoneBook!!" << std::endl;
}

void PhoneBook::print(Contact contact) {
  std::cout << "[First Name]: " << contact.get_first_name() << std::endl;
  std::cout << "[Last Name]: " << contact.get_last_name() << std::endl;
  std::cout << "[Nick Name]: " << contact.get_nick_name() << std::endl;
  std::cout << "[Phone Number]: " << contact.get_phone_number() << std::endl;
  std::cout << "[Darkest Secret]: " << contact.get_darkest_secret()
            << std::endl;
}
