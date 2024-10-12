// #include <iostream>
// int main(){
//     int N;
//     std::cout << "enter N: ";
//     std::cin >> N;
//     int* arr = new int[N];
//     if (0 > N){
//         std::cout << "error. incorrect size of size.";
//         return 1;
//     }
//     for (int i = 0; i < N; i++){
//         std::cin >> arr[i];
//     }
//     int elsum = 1;
//     for (int i = 0; i < N; i++){
//         if (arr[i] == arr[i + 1]){
//             elsum++;
//         }
//     }
// }









// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;

//     if (N <= 0) {
//         std::cout << "incorrect size.";
//         return 1;
//     }

//     int *arr = new int[N];

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     int *result = new int[N];  // Создаем новый массив для результата
//     int resultSize = 0;

//     for (int i = 0; i < N; i++) {
//         if (resultSize == 0 || arr[i] != result[resultSize - 1]) {
//             result[resultSize] = arr[i];
//             resultSize++;
//         }
//     }
//     for (int i = 0; i < resultSize; i++) {
//         std::cout << result[i] << " ";
//     }
// }




#include <iostream>
int main(){
    int n; std::cout << "enter n "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    int* arr2 = new int[n]; int arr2size = 0;
    for (int i = 0; i < n; i++){
        if (arr2size == 0 || arr[i] != arr2[arr2size - 1]){
            arr2[arr2size] = arr[i];
            arr2size++;
        }
    }
    for (int i = 0; i < arr2size; i++){std::cout << arr2[i] << " ";}
}




























// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;

//     if (N <= 0) {
//         std::cout << "Incorrect size.";
//         return 1;
//     }

//     int *arr = new int[N];

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     int *result = new int[N];  // Создаем новый массив для результата
//     int resultSize = 0;

//     for (int i = 0; i < N; i++) {
//         if (resultSize == 0 || arr[i] != result[resultSize - 1]) {
//             result[resultSize++] = arr[i];
//         }
//     }
//     for (int i = 0; i < resultSize; i++) {
//         std::cout << result[i] << " ";
//     }
// }
