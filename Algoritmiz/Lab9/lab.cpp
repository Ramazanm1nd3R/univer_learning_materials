#include <iostream>
int main(){
    int n, k, m; std::cin >> n >> k >> m;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int* arr2 = new int[n + m];
    for (int i = 0; i < k; i++){
        arr2[i] = arr[i];
    }
    int index = 0;
    for (int i = k; i < k + m + 1; i++){
        arr2[i] = 0;
        index = i;        
    }
    for (int i = k + m; i < n + m; i++){
        arr2[i] = arr[i - m];
    }
    for (int i = 0; i < n + m; i++){
        std::cout << arr2[i] << " ";
    }
}








// #include <iostream>

// int main() {
//     int n;
//     std::cout << "enter N: ";
//     std::cin >> n;

//     int* arr = new int[n];

//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     int newSize = 0; 

//     for (int i = 0; i < n; i++) {
//         int j;
//         for (j = 0; j < newSize; j++) {
//             if (arr[i] == arr[j]) {
//                 break; 
//             }
//         }
//         if (j == newSize) {
//             arr[newSize] = arr[i]; 
//             newSize++;
//         }
//     }
//     for (int i = 0; i < newSize; i++) {
//         std::cout << arr[i] << " ";
//     }
// }
