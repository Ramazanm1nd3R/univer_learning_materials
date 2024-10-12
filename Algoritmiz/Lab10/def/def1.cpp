// #include <iostream>
// int main(){
//     int n, count = 0;
//     std::cin >> n;
//     int* arr = new int[n];
//     for (int i = 0; i < n; i++){
//         std::cin >> arr[i];
//         if (arr[i] % 3 == 0){
//             count++;
//         }
//     }
//     int* arr2 = new int[n - count];
//     int index = 0;
//     for (int i = 0; i < n; i++){
//         if (arr[i] % 3 != 0){
//             arr2[index] = arr[i];
//             index++;
//         }
//     }
//     for (int i = 0; i < n - count; i++){
//         std::cout << arr2[i] << " ";
//     }
// }


#include <iostream>
int main(){
    int n, count = 0;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if (arr[i] % 3 == 0){
            count++;
        }
    }
    int index = 0;
    int* arr2 = new int[n - count];
    for (int i = 0; i < n; i++){
        if (arr[i] % 3 != 0){
            arr2[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n - count; i++){
        std::cout << arr2[i] << " ";
    }
}