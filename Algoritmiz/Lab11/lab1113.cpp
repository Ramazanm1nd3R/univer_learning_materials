// #include <iostream>

// int func(int num, size_t x) {
//     if (x == 0) return 1;
//     else return num * func(num, x - 1);
// }

// void calc(std::string x) {
//     int count = 0;
//     bool error = false;
//     for (size_t i = 0; i < x.size(); i++) {
//         if (x[i] == '0' || x[i] == '1') {
//             count += (x[i] - '0') *func(2, (x.size() - i - 1));
//         }
//         else {
//             error = true;
//         }
//     }
//     if (error) {
//         std::cout << "error";
//     }
//     else {
//         std::cout << count;
//     }
// }

// int main() {
//     std::string s{};
//     getline(std::cin, s);
//     calc(s);
//     return 0;
// }

#include <iostream>

int main() {
    std::string s;
    getline(std::cin, s);
    int decimal = 0;
    bool error = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') {
            int digit = s[i] - '0';
            decimal = decimal * 2 + digit;
        } 
        else {
            error = true;
            break;
        }
    }
    if (error) {
        std::cout << "error";
    } else {
        std::cout << decimal;
    }
}
