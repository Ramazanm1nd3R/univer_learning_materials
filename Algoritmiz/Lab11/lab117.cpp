#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str);
    int dec = 0;
    bool error = false;
    for (size_t i = 0; i < str.size();i++){
        if (str[i] = '0' || str[i] = '1'){
            int d = str[i] - '0';
            dec = dec * 2 + d;
        }
        else {
            error = true;
            break;
        }
    }
    if (error){
        std::cout << "error";
    }
    else {
        std::cout << dec;
    }
}