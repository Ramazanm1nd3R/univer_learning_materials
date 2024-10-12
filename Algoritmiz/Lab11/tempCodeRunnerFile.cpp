#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin,str);
    int counter = 0;
    for (char x : str){
        if (isdigit(x)){
            counter++;
        }
    }
    std::cout << counter;
}