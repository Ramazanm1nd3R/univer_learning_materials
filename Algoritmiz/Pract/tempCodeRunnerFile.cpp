#include <iostream>

int main(){
    std::string name;
    std::getline(std::cin, name);

    size_t space = name.find(' ');
    std::string surname = name.substr(space + 1);

    std::cout << surname;
}