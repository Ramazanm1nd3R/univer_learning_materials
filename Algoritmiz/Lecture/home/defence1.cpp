#include <iostream>
int main(){
    int n, sum = 0;
    std::cin >> n;
    while (n != 0){
        int x = n % 10;
        sum += x;
        n = n / 10;
    }
    std::cout << sum;
}

// #include <iostream>
// int main(){
//     int a = 123456;
//     std::cout << a/10 << " " << a%10; 
// }
