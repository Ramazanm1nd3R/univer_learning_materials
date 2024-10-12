#include <iostream>
int main() {
    std::string input;
    std::getline(std::cin, input);
    for (size_t i = 0; i < input.size(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 'a' + 'A';
        } 
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] - 'A' + 'a';
        }

    }
    std::cout << input;
}

#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    for (size_t i = 0; i < str.size(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = std::toupper(str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = std::tolower(str[i]);
        }
    }
    std::cout << str;
}