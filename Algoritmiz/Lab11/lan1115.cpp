#include <iostream>
int main() {
    std::string x;
    int k;
    std::getline(std::cin, x);
    std::cin >> k;
    std::string encrypt = "";
    for (char c : x) {
        if (isupper(c)) {
            char encryptchar = 'A' + (c - 'A' + k) % 26;
            encrypt += encryptchar;
        }
        else if (islower(c)) {
            char encryptchar = 'a' + (c - 'a' + k) % 26;
            encrypt += encryptchar;
        }
        else {
            encrypt += c;
        }
    }
    std::cout << encrypt;
}
