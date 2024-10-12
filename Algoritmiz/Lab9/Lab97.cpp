// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter n: ";
//     std::cin >> n;
//     int* arr = new int[n];

//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     int maxel = 0, minel = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[maxel] < arr[i]) {
//             maxel = i;
//         }
//         if (arr[minel] > arr[i]) {
//             minel = i;
//         }
//     }

//     int* arr2 = new int[n + 2];

//     // Копируем элементы из начала и до максимального элемента
//     for (int i = 0; i <= maxel; i++) {
//         arr2[i] = arr[i];
//     }

//     // Вставляем элемент с нулевым значением после максимального элемента
//     arr2[maxel + 1] = 0;

//     // Копируем элементы после максимального и до конца
//     for (int i = maxel + 1; i < n + 2; i++) {
//         arr2[i] = arr[i - 1];
//     }

//     // Выводим новый массив с вставленными элементами
//     for (int i = 0; i < n + 2; i++) {
//         std::cout << arr2[i] << " ";
//     }

// }





#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Array should have at least two elements for insertion." << std::endl;
        return 1;
    }

    int* arr = new int[n];
    
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Найдем минимальный и максимальный элементы
    int minindex = 0, maxindex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
    }

    int* arr2 = new int[n + 2];
    int newindex = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == minindex) {
            arr2[newindex] = 0;
            newindex++;
        }
        arr2[newindex++] = arr[i];
        if (i == maxindex && i != n - 1) {
            arr2[newindex] = 0;
            newindex++;
        }
    }

    std::cout << "Result: ";
    for (int i = 0; i < n + 2; i++) {
        std::cout << arr2[i];
        if (i < n + 1) {std::cout << ", ";}
    }
}
