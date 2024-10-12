#include <iostream>
int main() {
    int M, N;
    std::cout << "enter M, N: ";
    std::cin >> M >> N;

    int** matrix = new int*[M];
    for (int i = 0; i < M; ++i) {
        matrix[i] = new int[N];
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int K1, K2;
    std::cout << "enter k1, k2: ";
    std::cin >> K1 >> K2;
    K1--;
    K2--;

    for (int j = 0; j < N; ++j) {
        int x = matrix[K1][j];
        matrix[K1][j] = matrix[K2][j];
        matrix[K2][j] = x;
    }

    std::cout << std::endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << matrix[i][j] << " ";
        }
            std::cout << std::endl;
    }
}