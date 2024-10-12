// #include <iostream>
// int main(){
//     int size = 0;
//     std::cout << "enter ray size: ";

//     std::cin >> size;
//     int *arr = new int[size];
//     for (int i = 0; i < size; i++){
//         arr[i] = rand() % 100;
//     }

//     for (int i = 0; i < size; i++){
//         std::cout << arr[i] << " ";
//         std::cout << arr + i << std::endl;
//     }
//     delete [] arr;
// }



// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Введите размер массива N: ";
//     std::cin >> N;

//     if (N < 1) {
//         std::cout << "Размер массива должен быть не менее 1." << std::endl;
//         return 1;
//     }

//     int* arr = new int[N];
    
//     std::cout << "Введите элементы массива:" << std::endl;
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     int K;
//     std::cout << "Введите значение K для удаления: ";
//     std::cin >> K;

//     // Первый проход для подсчета количества элементов равных K
//     int countK = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] == K) {
//             countK++;
//         }
//     }

//     // Определение размера нового массива
//     int newSize = N - countK;

//     // Создаем новый массив меньшего размера
//     int* newArr = new int[newSize];
//     int newIndex = 0;

//     // Второй проход для копирования элементов в новый массив, исключая K
//     for (int i = 0; i < N; i++) {
//         if (arr[i] != K) {
//             newArr[newIndex] = arr[i];
//             newIndex++;
//         }
//     }

//     // Выводим новый массив
//     std::cout << "Массив после удаления элементов со значением " << K << ":" << std::endl;
//     for (int i = 0; i < newSize; i++) {
//         std::cout << newArr[i] << " ";
//     }
//     std::cout << std::endl;

//     // Освобождаем память
//     delete[] arr;
//     delete[] newArr;

//     return 0;
// }






// #include <iostream>
// int main(){
//     int N;
//     std::cout << "enter N:";
//     std::cin >> N;
//     if (N < 1){
//         std::cout << "error, enter the correct aray size";
//         return 1;
//     }
    
//     int* arr = new int[N];
//     for (int i = 0; i < N; i++){
//         std::cin >> arr[i];
//     }

//     int K, ksum = 0;
//     std::cin >> K;
//     std::cout << "etner K: ";
//     for (int i; i < N; i++){
//         if (arr[i] == K){
//             ksum++;
//         }
//     }

//     int newsizeN = N - ksum;
//     int* newarr = new int[newsizeN];
//     int newindex = 0;

//     for (int i = 0; i < N; i++){
//         if (arr[i] != K){
//             newarr[newindex] = arr[i];
//             newindex++;
//         }
//     }

//     for (int i = 0; i < newsizeN; i++){
//         std::cout << newarr[i] << " ";
//     }

//     delete[] arr;   
//     delete[] newarr; 
// }

// #include <iostream>
// int main(){
//     int N;
//     std::cout << "enter N: ";
//     std::cin >> N;
//     int* arr = new int[N];
//     for (int i = 0; i < N; i++){
//         std::cin >> arr[i];
//     }
//     int indexK, newindex = 0;
//     std::cout << "enter K: ";
//     std::cin >> indexK;
//     if (indexK < 0 || indexK >= N){
//         std::cout << "ti invalid error";
//         return 1;
//     }
//     int* newarr = new int[N - 1];
//     for (int i = 0; i < N; i++){
//         if (i != indexK){
//             newarr[newindex] = arr[i];
//             newindex++;
//         }
//     }
//     for (int i = 0; i < (N - 1); i++){
//         std::cout << newarr[i] << " ";
//     }

//     delete[] arr;
//     delete[] newarr;
// }

// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;

//     if (N <= 0) {
//         std::cout << "Invalid array size." << std::endl;
//         return 1;
//     }

//     int* arr = new int[N];
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     int indexK;
//     std::cout << "Enter the index (0 to " << N - 1 << ") to remove: ";
//     std::cin >> indexK;

//     if (indexK < 0 || indexK >= N) {
//         std::cout << "Invalid index." << std::endl;
//         return 1;
//     }

//     int* newarr = new int[N - 1];
//     int newindex = 0;

//     for (int i = 0; i < N; i++) {
//         if (i != indexK) {
//             newarr[newindex] = arr[i];
//             newindex++;
//         }
//     }

//     for (int i = 0; i < (N - 1); i++) {
//         std::cout << newarr[i] << " ";
//     }

//     delete[] arr;
//     delete[] newarr;
// }







#include <iostream>
int main(){
    int n, indexK; std::cout << "enter n "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    std::cout << "enter index k ";std::cin >> indexK;
    for (int i = indexK; i < n; i++){arr[i] = arr[i - 1];}
    for (int i = 0; i < n - 1; i++){std::cout << arr[i] << " ";}
}




// #include <iostream>

// int main() {
//     int n, k = 0;
//     std::cin >> n;

 
//     int* list = new int[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> list[i];
//     }

//     std::cin >> k;
//     k -= 1;
//     for (int i = k; i < n-1; i++) {
//         std::swap(list[i], list[i + 1]);
//     }
//     n -= 1;
//     for (int i = 0; i < n; i++) {
//         std::cout << list[i] << " ";
//     }
// }
