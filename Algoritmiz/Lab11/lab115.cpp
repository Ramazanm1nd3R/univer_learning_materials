#include <iostream>
int main() {
    char C;
    std::string S, S0;
    std::cin >> C >> S >> S0;
    std::string result;
    for (size_t i = 0; i < S.size(); i++) {
        if (S[i] == C) {
            result += S0;
        }
        result += S[i];
    }
    std::cout << result;
}


#include <iostream>
#include <string>
int main(){
    char C;
    std::string S, S0, result;
    std::cin >> C >> S0 >> S;
    for (char i : S){
        if (i == C){
            result += S0;
        }
        result += i;
    }
    std::cout << result;
}


