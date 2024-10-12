#include <iostream>

int main() {
    double num, result = 0;
    char x;
    std::cin >> result;

    while (true) {
        std::cin >> x;
        if (x == '=') {
            break;
        }
        std::cin >> num;
        switch (x) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    result /= num;
                } else {
                    std::cout << "/0 not correct" << std::endl;
                    return 1;  
                }
                break;
            default:
                std::cout << "Invalid operation: " << x << std::endl;
                return 1;  
        }
    }

    std::cout << "Result: " << result << std::endl;
}

// #include <iostream>

// int main() {
//     double result = 0.0;
//     double currentNumber;
//     char operation;

//     std::cout << "Enter a number and an operation (+, -, *, /) or '=' to calculate: ";
//     std::cin >> result;

//     while (true) {
//         std::cin >> operation;

//         if (operation == '=') {
//             break;
//         }

//         std::cin >> currentNumber;

//         switch (operation) {
//             case '+':
//                 result += currentNumber;
//                 break;
//             case '-':
//                 result -= currentNumber;
//                 break;
//             case '*':
//                 result *= currentNumber;
//                 break;
//             case '/':
//                 if (currentNumber != 0) {
//                     result /= currentNumber;
//                 } else {
//                     std::cout << "Error: Division by zero is not allowed." << std::endl;
//                     return 1;  // Exit with an error code
//                 }
//                 break;
//             default:
//                 std::cout << "Invalid operation: " << operation << std::endl;
//                 return 1;  // Exit with an error code
//         }
//     }

//     std::cout << "Result: " << result << std::endl;

//     return 0;  // Exit successfully
// }
