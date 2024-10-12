
#include <iostream>

int main() {
    int n, m = 0;
    std::cin >> n >> m;
    int** list = new int* [n];
    for (int i = 0; i < n; i++) {
        list[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> list[i][j];
        }
    }
    int max = list[0][0];
    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (max < list[j][i]) {
                max = list[j][i];
                k = i;
            }
        }
    }
    for (int i = k; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            std::swap(list[j][i], list[j][i+1]);
        }
    }
    m -= 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << list[i][j] << " ";
        }
        std::cout << "\n";
    }

}
