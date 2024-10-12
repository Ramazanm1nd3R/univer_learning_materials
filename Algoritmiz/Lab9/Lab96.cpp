// #include <iostream>
// int main(){
//     int N, K;

//     std::cout << "Enter N: ";
//     std::cin >> N;

//     if (N <= 0) {
//         std::cout << "Incorrect size of the array.";
//         return 1;
//     }

//     int *arr = new int[N];
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     std::cout << "Enter K: ";
//     std::cin >> K;

//     if (K < 1 || K > N) {
//         std::cout << "Invalid value of K.";
//         return 1;
//     }

//     int *newArr = new int[N + 1];

//     for (int i = 0; i < K - 1; i++) {
//         newArr[i] = arr[i];
//     }

//     newArr[K - 1] = 0;

//     for (int i = K; i <= N; i++) {
//         newArr[i] = arr[i - 1];
//     }

//     for (int i = 0; i < N + 1; i++) {
//         std::cout << newArr[i] << " ";
//     }

// }


#include <iostream>
int main(){
    int n; std::cout << "enter n "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    int k; std::cout << "enter k "; std::cin >> k;
    int* arr2 = new int[n + 1];
    for (int i = 0; i < k - 1; i++){arr2[i] = arr[i];}

    arr2[k - 1] = 0;

    for (int i = k; i <= n; i++){arr2[i] = arr[i - 1];}
    for (int i = 0; i < n + 1; i++){std::cout << arr2[i] << " ";}
}