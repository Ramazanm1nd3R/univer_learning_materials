// #include <iostream>
// int main() {
//     int N;
//     std::cout << "enter N (> 2): ";
//     std::cin >> N;

//     if (N <= 2) {
//         std::cout << "incorrect size. ti invalid";
//         return 1;
//     }
//     int* arr = new int[N];
//     int newSize = (N + 1) / 2; 
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

    

//     std::cout << "output aray size: " << newSize;
//     std::cout << "aray: ";
//     for (int i = 0; i < newSize; i++) {
//         std::cout << arr[i * 2] << " ";
//     }
//     delete[] arr;
// }














// #include <iostream>
// int main(){
//     int N;
//     std::cout << "enter N: ";
//     std::cin >> N;
//     int* arr = new int[N];
//     if (N < 2){
//         std::cout << "error, incorrect size.";
//         return 1;
//     }
//     for (int i = 0; i < N; i++){
//         std::cin >> arr[i];
//     }
    
//     int newsize = N / 2 + N % 2;

//     for (int i = 1; i <= newsize; i++){
//         arr[i] = arr[i * 2 - 1];
//     }
//     for (int i = 1; i < newsize; i++){
//         std::cout << arr[i] << " ";
//     }
// }




#include <iostream>
int main(){
    int n; std::cout << "enter n (n > 2): "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    int n2 = n / 2 + n % 2;
    for (int i = 1; i <= n2; i++){arr[i] = arr[i * 2 - 1];}
    for (int i = 1; i < n2; i++){std::cout << arr[i] << " ";}
}










// #include <iostream>

// int main() {
//     int N;
//     std::cin >> N; // Ввод размера массива
//     int arr[N];

//     // Ввод массива
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     // Удаление элементов с четными индексами
//     int newN = N / 2 + N % 2; // Новый размер массива (с нечетными индексами)
//     for (int i = 0; i < newN; i++) {
//         arr[i] = arr[i - 2];
//     }

//     // Вывод результирующего массива
//     for (int i = 0; i < newN; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }




// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Ваш исходный массив

//     int newSize = arr.size() / 2; // Новый размер массива

//     for (int i = 0; i < newSize; i++) {
//         arr[i] = arr[i * 2]; // Копируем элементы с нечетными индексами
//     }

//     arr.resize(newSize); // Уменьшаем размер массива до newSize

//     // Выводим новый массив
//     for (int i = 0; i < newSize; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }



























