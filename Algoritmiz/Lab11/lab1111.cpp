// #include <iostream>
// int main() {
//     std::string input;
//     std::getline(std::cin, input);
//     std::string curr;
//     std::string longest;
//     int maxLength = 0;

//     for (char c : input) {
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\'')) {
//             curr += c;
//         } 
//         else {
//             if (!curr.empty() && curr.length() > maxLength) {
//                 maxLength = curr.length();
//                 longest = curr;
//             }
//             curr.clear();
//         }
//     }
//     if (!curr.empty() && curr.length() > maxLength) {
//         longest = curr;
//     }
//     if (maxLength != 0){
//         std::cout << longest << std::endl << maxLength;
//     }
//     else {
//         std::cout << maxLength;
//     }
   
// }



// #include <iostream>

// int main() {
//     std::string a;
//     std::getline(std::cin, a);
//     std::string longword;
//     size_t maxl = 0;

//     std::string current;
//     for (size_t i = 0; i < a.length(); i++) {
//         char c = a[i];
//         if (std::isalpha(c)) {
//             current += c;
//         } else {
//             if (current.length() > maxl) {
//                 maxl = current.length();
//                 longword = current;
//             }
//             current.clear();
//         }
//     }
//     if (current.length() > maxl) {
//         longword = current;
//     }
//     if (maxl != 0){
//         std::cout << longword << std::endl << maxl;
//     }
//     else {
//         std::cout << maxl;
//     }
// }


#include <iostream>
#include <string>

int main() {
    std::string a;
    std::getline(std::cin, a);

    std::string longword;
    size_t max = 0;

    std::string current;
    for (size_t i = 0; i < a.length(); i++) {
        char count = a[i];
        if (std::isalpha(count)) {
            current += count;
        } 
        else {
            if (current.length() > max) {
                max = current.length();
                longword = current;
            }
            current.clear();
        }
    }

    if (current.length() > max) {
        longword = current;
        max = current.length();
    }
    if (max != 0) {
        std::cout << longword << std::endl << max;
    } 
    else {
        std::cout << max;
    }
}
