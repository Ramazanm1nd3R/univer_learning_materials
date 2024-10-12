// #include <iostream>

// int main() {
//     int N;

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

//     // Создаем новый массив на два раза больше, чтобы вместить дубликаты
//     int *newArr = new int[N * 2];
//     int newSize = 0;

//     for (int i = 0; i < N; i += 2) {
//         newArr[newSize] = arr[i]; // Копируем элемент
//         newSize++;
//         newArr[newSize] = arr[i]; // Дублируем элемент
//         newSize++;
//     }

//     // Выводим новый массив

//     for (int i = 0; i < newSize; i++) {
//         std::cout << newArr[i] << " ";
//     }
// }



// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;  
//     int *arr = new int[N];

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i]; 
//     }
//     int* arr2 = new int[N + (N / 2)];
//     int newSize = 0;
//     for (int i = 0; i < N; i++) {
//         arr2[newSize] = arr[i]; 
//         newSize++;
//         if (i != 0 && i % 2 == 0) {  
//             arr2[newSize] = arr[i];
//             newSize++;
//         }
//     }
//     for (int i = 0; i < newSize; i++) {
//         std::cout << arr2[i] << " ";
//     }
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
//     int* arr2 = new int[N + (N / 2)];
//     int newsize = 0;
//     for (int i = 0; i < N; i++){
//         arr2[newsize] = arr[i];
//         newsize++;
//         if (i != 0 && i % 2 == 0){
//             arr2[newsize] = arr[i];
//             newsize++;
//         }
//     }

//     std::cout << "answer: ";
//     for (int i = 0; i < newsize; i++){
//         std::cout << arr2[i] << " ";
//     }
    
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
//     int* arr2 = new int[N + (N / 2)];
//     int newsize = 0;
//     for (int i = 0; i < N; i++){
//         arr2[i] = arr[i];
//     }
//     for (int i = 2; i < (N + (N / 2)); i+=2){
//         arr2[i + 1] = arr[i];
//     }


//     std::cout << "answer: ";
//     for (int i = 0; i < newsize; i++){
//         std::cout << arr2[i] << " ";
//     }
    
// }



// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;  
//     int *arr = new int[N];

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i]; 
//     }
//     int* arr2 = new int[N + (N / 2)];
//     int newSize = 0;
//     for (int i = 0; i < N; i++) {
//         arr2[newSize] = arr[i]; 
//         newSize++;
//         if (i != 0 && i % 2 == 0) {  
//             arr2[newSize] = arr[i];
//             newSize++;
//         }
//     }
//     for (int i = 0; i < newSize; i++) {
//         std::cout << arr2[i] << " ";
//     }
// }







// #include <iostream>
// int main() {
//     int n, c = 1, k = 0;
//     std::cin >> n;
//     int* arr = new int[n+(n/2)];

//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }
//     for (int i = n; i < n + (n / 2); i++) {
//         arr[i] = 0;
//     }

//     for (int i = n; i < n + (n / 2); i++) {
        
//         for (int j = i-1; j >= c; j--) {
//             std::swap(arr[j], arr[j+1]);
//             k = j;
//         }
//         arr[k] = arr[k + 1];
//         c += 3;
//     }
//     for (int i = 0; i < n + (n / 2); i++) {
//         std::cout << arr[i] << " ";
//     }
// }








#include <iostream>
int main(){
    int n, c = 1, meaning = 0;
    std::cout << "enter N: ";
    std::cin >> n;
    int newsize = n + (n / 2);
    int* arr = new int[newsize];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for (int i = n; i < newsize; i++){
        arr[i] = 0;
    }
    for (int i = n; i < newsize; i++){
        for (int j = i - 1; j >= c; j--){
            std::swap(arr[j], arr[j + 1]);
            meaning = j;
        }
        arr[meaning] = arr[meaning + 1];
        c += 3;
    }
    for (int i = 0; i < newsize; i++){
        std::cout << arr[i] << " ";
    }
}

