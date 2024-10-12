// #include <iostream>
// int main(){
//     int n;
//     std::cin >> n;
//     int* arr = new int[n];
//     arr[0] = 0;
//     if (n > 1){
//         arr[1] = 1;
//     }
//     for (int i = 2; i < n; i++){
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     for (int i = 0; i < n; i++){
//         std::cout << arr[i] << " ";
//     }
// }

#include <iostream>
int func(int n){
    if (n <= 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return func(n - 1) + func(n - 2);
    }
}

int main(){
    int n;
    std::cin >> n;
    int* arr = new int[n];
    arr[0] = 0;
    if (n > 1){
        arr[1] = 1;
    }
    for (int i = 0; i < n; i++){
        std::cout << func(i) << " ";
    }
}