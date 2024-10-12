#include <iostream>
int main() {
    std::string input;
    std::getline(std::cin, input);
    int count = 0;
    for (char c : input) {
        if (ispunct(c)) {
            count++;
        }
    }
    std::cout << count;
}
