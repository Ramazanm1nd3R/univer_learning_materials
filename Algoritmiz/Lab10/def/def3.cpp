// #include <iostream>
// int func(int num, int x){
//     if (x == 0){
//         return 1;
//     }
//     else {
//         return num * func(num, x - 1);
//     }
// }
// int main(){
//     int num, x;
//     std::cin >> num >> x;
//     std::cout << num << " " << x << " " << func(num, x);
// }


#include <iostream>

int func(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + func(a, b - 1);
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << func(a, b);
}
