#include <iostream>

int main() {
    int n, m = 0;
    std::cin >> n >> m;
    int** list = new int* [n+1];
    for (int i = 0; i < n+1; i++) {
        list[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> list[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        list[n][i] = 0;
    }

    int max = list[0][0];
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < list[i][j]) {
                max = list[i][j];
                k = i;
            }
        }
    }
    for (int i = n; i > k; i--) {
        for (int j = 0; j < m; j++) {
            std::swap(list[i][j], list[i-1][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        list[k][i] = list[k + 1][i];
    }
    
    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << list[i][j] << " ";
        }
        std::cout << "\n";
    }
}