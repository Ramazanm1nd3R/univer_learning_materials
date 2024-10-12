#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter n, m: ";
    std::cin >> n >> m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    int k;
    std::cout << "Enter k: ";
    std::cin >> k;

    int** arr2 = new int*[n + 1];
    for (int i = 0; i < n + 1; i++) {
        arr2[i] = new int[m];
    }

    for (int i = 0; i < k - 1; i++){
        for (int j = 0; j < m; j++){
            arr2[i][j] = arr[i][j];
        }
    }
    for (int j = 0; j < m; j++){
        arr2[k - 1][j] = 0;
    }
    for (int i = k - 1; i < n; i++){
        for (int j = 0; j < m; j++){
            arr2[i + 1][j] = arr[i][j];
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}




