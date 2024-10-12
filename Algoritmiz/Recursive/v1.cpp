// #include <iostream>
// void zhasik(int num){
//     for (int i = 0; i < num; i++){
//         std::cout << "lox" << std::endl;
//     }
// }
// int main(){
//     int num;
//     std::cin >> num;
//     zhasik(num);
//     std::cout << std::endl;
// }

#include <iostream>

void aboba(int num) {
    if (num > 0) {
        std::cout << "zhasik lox" << std::endl;
        aboba(num - 1); 
    }
}

int main() {
    int num;
    std::cin >> num;
    aboba(num);
    std::cout << std::endl;
}
