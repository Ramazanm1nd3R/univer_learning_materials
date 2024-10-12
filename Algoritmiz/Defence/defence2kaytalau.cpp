// 1. Enter a number (one number). Show the sum of all the digits in this number (clarification - the number can be any, two-digit, five-digit, etc.)

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

// 2. Create an array of size 10 and enter all the numbers from the keyboard.
// Zero out the elements to the right and left of the largest number.

// #include <iostream>
// #include <vector>
// int main(){
//     std::vector<int> arr(10);
//     int maxind = 0, max = arr[0];
//     for (int i = 0; i < 10; i++){
//         std::cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++){
//         if (arr[i] > max){
//             max = arr[i];
//             maxind = i;
//         }
//     }
//     arr[maxind - 1] = 0;
//     arr[maxind + 1] = 0;

//     for (int i = 0; i < 10; i++){
//         std::cout << arr[i] << " ";
//     }
// }

// 3. Create an array of size 10 and enter all the numbers from the keyboard.
// Sort the first half of the array in descending order, and the other half in ascending order. (Insertion Sort)

#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Сортировка первой половины массива в убывающем порядке
        if (i < n / 2) {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        // Сортировка второй половины массива в возрастающем порядке
        else {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    insertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}
