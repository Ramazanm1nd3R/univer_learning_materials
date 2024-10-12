#include <iostream>
int main() {
    std::string a; getline(std::cin, a);
    int count = 0, lenth = 0; bool x = false;
    a += ' ';
    for (size_t i = 0; i < a.size(); i++) {
        char current = a[i];
        if ((current >= 0 && current <= 47) || (current >= 58 && current <= 64)) {
            if (x) {
                x = false;
            }
        }
        else {
            x = true;
        }
        if (x == 1) {
            lenth++;
        }
        else if (x == 0) {
            if (((int)tolower(a[i - 1]) == (int)tolower(a[i - lenth])) && (lenth > 1)) {
                count++;
            }
            lenth = 0;
        }
    }
    std::cout << count;
}