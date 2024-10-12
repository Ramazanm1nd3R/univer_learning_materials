// #include <iostream>
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int n;
//     std::cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     // bubble сорт
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int middle = n / 2;

    // Сортировка первой половины по убыванию
    for (int i = 0; i < middle - 1; i++) {
        for (int j = 0; j < middle - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    // Сортировка второй половины по возрастанию
    for (int i = middle; i < n - 1; i++) {
        for (int j = middle; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}
