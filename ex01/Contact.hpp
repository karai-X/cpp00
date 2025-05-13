#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
  std::string First_Name;
  std::string Last_Name;
  std::string Nick_Name;
  std::string Phone_Number;
  std::string Darkest_Secret;
  bool _filled;
  int _idx;

public:
  Contact();
  ~Contact();
  Contact(std::string first_name, std::string last_name, std::string nick_name,
          std::string phone_number, std::string darkest_secret, int idx);
  std::string get_first_name();
  std::string get_last_name();
  std::string get_nick_name();
  std::string get_phone_number();
  std::string get_darkest_secret();
  bool get_filed();
  int get_idx();
  void set_filed(bool filed);
  void set_idx(int idx);
};

#endif
