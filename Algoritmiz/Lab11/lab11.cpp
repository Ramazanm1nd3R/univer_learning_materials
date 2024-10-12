#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    int counter = 0;
    for (char i : str){
        if (ispunct(i)){
            counter++;
        }
    }
    std::cout << counter;
}