#include <iostream>
int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
int main(){
    int n;
    std::cin >> n;
    std::cout << fact(n);
}