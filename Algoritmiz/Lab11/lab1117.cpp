// #include <iostream>
// #include <stack>
// #include <string>

// int main() {
//     std::string input;
//     std::getline(std::cin, input);

//     std::stack<int> bracketStack;

//     for (int i = 0; i < input.size(); i++) {
//         if (input[i] == '(') {
//             bracketStack.push(i + 1);  // Push the position of opening bracket
//         } else if (input[i] == ')') {
//             if (!bracketStack.empty()) {
//                 bracketStack.pop();  // Matched a pair, so pop the opening bracket
//             } else {
//                 std::cout << i + 1 << std::endl;  // Output the position of unmatched closing bracket
//                 return 0;
//             }
//         }
//     }

//     // Check for unmatched opening brackets
//     while (!bracketStack.empty()) {
//         std::cout << bracketStack.top() << std::endl;  // Output the position of unmatched opening bracket
//         bracketStack.pop();
//     }

//     if (bracketStack.empty()) {
//         std::cout << "0" << std::endl;  // Brackets are correctly placed
//     }

//     return 0;
// }




#include <iostream>
int main() {
    std::string a;
    std::getline(std::cin, a);
    int x = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            x++;
        } else if (a[i] == ')') {
            x--;
            if (x < 0) {
                std::cout << i + 1;
                return 0;
            }
        }
    }
    if (x == 0) {
        std::cout << "0";
    } 
    else {
        std::cout << "-1";
    }
}

