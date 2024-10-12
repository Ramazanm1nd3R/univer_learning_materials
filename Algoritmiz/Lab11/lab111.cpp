#include <iostream>
int main(){
    char a;
    std::cin >> a;
    std::cout << char(a - 1) << " " << char(a + 1);
}