#include <iostream>
#include <string>
int main(){
    std::string S, S0;
    std::getline(std::cin, S), getline(std::cin, S0);
    size_t pos = S.find(S0);
    if (pos != std::string::npos){
        S.erase(pos, S0.length());
    }
    std::cout << S;
}