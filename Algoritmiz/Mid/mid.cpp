// #include <iostream>
// int main(){
//     int n;
//     std::cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         std::cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++){
//         for (int j = 0; j < n - i - 1; j++){
//             if (arr[j] > arr[j + 1]){
//                 int x = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = x; 
//             }
//         }
//     }
//     for (int i = 0; i < n; i++){
//         std::cout << arr[i] << " ";
//     }
// }

#include <iostream>
int main(){
    const int size = 6;
    int arr[size];
    int maxsum = 0, sum = 0;
    for (int i = 0; i < size; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            sum++;
        }
        else{
            if (maxsum < sum){
                maxsum = sum;
            }
            sum = 0;
        }
    }
    if (sum > maxsum){
        maxsum = sum;
    }
    std::cout << maxsum;
}