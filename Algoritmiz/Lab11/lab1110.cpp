#include <iostream>
int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string current;
    int count = 0;
    bool containsA = false;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\'')) {
            current += c;
            if (c == 'a' || c == 'A') {
                containsA = true;
            }
        } else {
            // Check if the current word meets the criteria
            if (!current.empty() && containsA && current != "a" && current != "A") {
                count++;
            }
            current.clear();
            containsA = false;
        }
    }
    if (!current.empty() && containsA && current != "a" && current != "A") {
        count++;
    }
    std::cout << count;
}
