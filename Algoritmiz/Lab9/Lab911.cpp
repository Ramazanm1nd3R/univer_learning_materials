#include <iostream>

int main() {
    int n;
    std::cout << "enter N: ";
    std::cin >> n;



    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int newSize = n; // Новый размер массива после вставки нулевых элементов
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            newSize++; // Увеличиваем размер при обнаружении начала новой серии
        }
    }

    int* newArr = new int[newSize];
    int newIndex = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] != arr[i - 1]) {
            newArr[newIndex] = 0; // Вставляем нулевой элемент перед новой серией
            newIndex++;
        }
        newArr[newIndex] = arr[i];
        newIndex++;
    }

    for (int i = 0; i < newSize; i++) {
        std::cout << newArr[i] << " ";
    }
}
