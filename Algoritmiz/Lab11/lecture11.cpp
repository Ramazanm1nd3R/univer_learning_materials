#include <iostream>

int main()
{

  std::string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string str2 = "";

  for (size_t i = 0; i < str.size(); i++)
  {
    std::cout << (int)str[i] << ' ';
  }
  std::cout << std::endl;

  // empty() - test if string is empty
  std::cout << std::endl;
  std::cout << str.empty();
  std::cout << std::endl;
  std::cout << str2.empty();
  std::cout << std::endl;

  // size() or length() - return length of string
  std::cout << std::endl;
  std::cout << str.size();
  std::cout << std::endl;
  std::cout << str2.length();
  std::cout << std::endl;

  // resize() - change size of string
  std::cout << std::endl;
  str.resize(25);
  std::cout << str.size() << ' ' << str << std::endl;
  str.resize(26, 'Z');
  std::cout << str.size() << ' ' << str << std::endl;
  str2.resize(30, 'Z');
  std::cout << str2.size() << ' ' << str2 << std::endl;

  // clear() - clear string
  std::cout << std::endl;
  str2.clear();
  std::cout << str2.size() << std::endl;

  // at() or [] - return character of string
  // front() - first character
  // back() - last character
  std::cout << std::endl;
  std::cout << str.at(3) << ' ' << str[4] << std::endl;
  std::cout << str.front() << ' ' << str.back() << std::endl;

  //+= append to string
  std::string str3 = "A";
  str3 += 'B';
  str3 += 'C';
  std::cout << std::endl;
  std::cout << str3 << std::endl;

  // append(string str) - append a string
  str3.append(str3);
  std::cout << str3 << std::endl;

  // append(string str, start, end) - append a substring
  // from start position to end position
  str3.append(str3, 0, 3);
  std::cout << str3 << std::endl;

  // pushback(char c) - append character to string
  std::cout << std::endl;
  str3.push_back('Z');
  std::cout << str3 << std::endl;

  // pop_back() - delete last character
  str3.pop_back();
  std::cout << str3 << std::endl;

  // insert(size_t pos, string str) - insert string at pos
  std::cout << std::endl;
  str3.insert(9, "XYZ");
  std::cout << str3 << std::endl;

  // erase(size_t pos, size_t len) - erase len symbols from pos
  std::cout << std::endl;
  str3.erase(3, 6);
  std::cout << str3 << std::endl;

  // replace(size_t pos, size_t len, string str)
  //- replace portion of string
  //
  // replace(size_t pos, size_t len, string str,
  //         size_t subpos, size_t sublen)
  std::string str4 = "ABCDEF";
  std::string str5 = "XYZ";
  std::string str6 = "ABCDEF";
  std::cout << std::endl;
  std::cout << str4 << std::endl;
  str4.replace(3, 3, str5);
  std::cout << str4 << std::endl;
  str4.replace(0, 3, str6, 0, 6);
  std::cout << str4 << std::endl;

  // substr(size_t pos, size_t len)
  str2 = str.substr(0, 2);

  std::getline(std::cin, str);
  std::cout << str << std::endl;

  // '/' - delimeter
  std::getline(std::cin, str, '/');
  std::cout << str << std::endl;
}
