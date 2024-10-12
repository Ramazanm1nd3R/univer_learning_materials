#include <iostream>
#include <string>
int main(){
    std::string str;
    std::cin >> str;
    int count = 0;
    for (char x : str){
        if (isdigit(x)){
            count++;
        }
    }
    std::cout << count;
}

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