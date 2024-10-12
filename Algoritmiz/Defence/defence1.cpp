// #include <iostream>
// int main(){
//     int n, sum = 0;
//     std::cin >> n;
//     while (n != 0){
//         int x = n % 10;
//         sum += x;
//         n = n / 10;
//     }
//     std::cout << sum;

// }

// #include <iostream>

// bool simplenumber(int number){
//     if (number <= 1){
//         return false;
//     }
//     for (int i = 2; i < number; i++){
//         if (number % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (simplenumber(arr[i][j])){
//                 arr[i][j] *= arr[i][j];
//             }
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cout << arr[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// }

// #include <iostream>
// int main(){
//     int n;
//     std::cin >> n;
//     int arr[n][n];
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         int lose = 0;
//         for (int j = 0; j < n; j++){
//             if (arr[i][j] == 0 && i != j){
//                 lose++;
//             }
//         }
//         if (lose == 0){
//             std::cout << i << " ";
//         }
//     }
// }

#include <iostream>
int main(){
    int n, sum = 0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        int num = arr[i];
        while (num != 0){
            int x = num % 10;
            sum += x;
            num = num / 10;
        }
    }
    std::cout << sum;
}