#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    std::string longword;
    size_t max = 0;
    std::string c;
    for (char i : str){
        char count = i;
        if (std::isalpha(count)){
            c += count;
        }
        else {
            if (c.length() > max){
                max = c.length();
                longword = c;
            }
            c.clear();
        }
    }
    if (c.length() > max){
        longword = c;
        max = c.length();
    }
    if (max != 0){
        std::cout << longword << std::endl << max;
    }
    else {
        std::cout << max;
    }
}