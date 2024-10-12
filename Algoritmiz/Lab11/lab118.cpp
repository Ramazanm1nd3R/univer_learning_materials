// #include <iostream>

// int main() {
//     std::string input;
//     std::getline(std::cin, input);
//     int count = 0;
//     bool Word = false;
//     for (char c : input) {
//         if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '.' || c == ',' || c == '!' || c == '?') {
//             if (Word) {
//                 count++;
//                 Word = false;
//             }
//         } else {
//             Word = true;
//         }
//     }

//     if (Word) {
//         count++;
//     }
//     std::cout << count;
// }






#include <iostream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    int count = 0;
    bool Word = false;
    for (char c : input) {
        if (std::isalpha(c)) {
            Word = true;
        } 
        else {
            if (Word) {
                count++;
                Word = false;
            }
        }
    }
    if (Word) {
        count++;
    }
    std::cout << count;
}

