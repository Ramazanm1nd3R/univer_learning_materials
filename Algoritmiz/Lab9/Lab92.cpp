// #include <iostream>
// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;
//     int* arr = new int[N];
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }
//     int K, L;
//     std::cout << "Enter K, L: ";
//     std::cin >> K >> L;
//     if (K >= L || L > N || K < 1) {
//         std::cout << "Error, ti invalid" << std::endl;
//         return 1;
//     }
//     int del = L - K + 1;
//     for (int i = K; i < N - del; i++) {
//         arr[i] = arr[i + del];
//     }
//     N -= del;
//     for (int i = 0; i < N; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

#include <iostream>
int main(){
    int n; std::cout << "enter n "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    int k, l; std::cout << "enter k,l "; std::cin >> k >> l; 
    int del = l - k + 1;
    for (int i = k; i < n - del; i++){
        arr[i] = arr[i + del];
    }
    n -= del;
    for (int i = 0; i < n; i++){std::cout << arr[i] << " ";}
}