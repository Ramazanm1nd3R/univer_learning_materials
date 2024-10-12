#include <iostream>

int main() {
    int n;
    std::cout << "enter N: ";
    std::cin >> n;



    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int newSize = 0; // Новый размер массива после удаления дубликатов

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[newSize] = arr[i]; // Если элемент не дубликат, добавляем его
            newSize++;
        }
    }

    for (int i = 0; i < newSize; i++) {
        std::cout << arr[i] << " ";
    }

}
