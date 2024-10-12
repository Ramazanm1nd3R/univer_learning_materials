#include <iostream>

// calc

double calc(double x, double y, char o){
    double s;
    switch (o)
    {
    case '+':
        s = x + y;
        break;
    case '-':
        s = x - y;
        break;
    case '*':
        s = x * y;
        break;
    case '/':
        if (y == 0) {
            std::cout << "Division by zero is not allowed." << std::endl;
            return 0.0;
        }
        s = x / y;
        break;
    default:
        std::cout << 'incorrect operator'<< std::endl;
        return 0.0;
    }
    return s;
}

int main(){
    double n, m;
    char x;
    std::cout << 'enter the number';
    std::cin >> n >> m;
    std::cout << 'enter operation type (+, -, *, /): ';
    std::cin >> x;
    double funcc = calc(n, m, x);
    std::cout << std::endl << funcc << std::endl;
}





































// // int sum(int x, int y){           //функция
// //     int s = x * y;
// //     return s;                    //функция возвращает 

// // }

// int main(){
//     int a = 10;
//     int b = 20;
//     int &c = a;   //& Обозначение ссылки    ( int &c; ) так делать нельзя
//     c = b;
//     std::cout << a << std::endl << b << std::endl << c << std::endl;
// }

// int sum(int x, int y){           //функция
//     return x + y;                    //функция возвращает 

// }
// // int main(){
// //     int a, b;
// //     std::cin >> a >> b;
// //     int funnccc = sum(a, b);
// //     std::cout << funnccc;
// // }