#include <iostream>

int fiba(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fiba(n - 1) + fiba(n - 2);
    }
}

int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = fiba(i);
        std::cout << arr[i] << ", ";
    }
}