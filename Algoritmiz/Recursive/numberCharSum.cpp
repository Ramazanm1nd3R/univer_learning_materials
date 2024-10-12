#include <iostream>

int func(int n){
    int num = n % 10;
    int sum = 0;
    sum += n;
    n / 10;
    func();
}

int main(){
    int num;
    std::cout << func(num);
}