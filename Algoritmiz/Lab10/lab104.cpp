// #include <iostream>

// int main() {
//     int M, N;

//     // Input matrix dimensions
//     std::cout << "Enter the number of rows M: ";
//     std::cin >> M;
//     std::cout << "Enter the number of columns N: ";
//     std::cin >> N;

//     // Create and input matrix elements
//     int matrix[100][100];  // Assuming a maximum size of 100x100, adjust as needed
//     std::cout << "Enter the elements of the matrix:\n";
//     for (int i = 0; i < M; ++i) {
//         for (int j = 0; j < N; ++j) {
//             std::cin >> matrix[i][j];
//         }
//     }

//     // Swap the upper and lower halves of the matrix
//     for (int i = 0; i < M / 2; ++i) {
//         for (int j = 0; j < N; ++j) {
//             // Use a temporary variable for swapping
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[i + M / 2][j];
//             matrix[i + M / 2][j] = temp;
//         }
//     }

//     // Output the modified matrix
//     std::cout << "Modified matrix:\n";
//     for (int i = 0; i < M; ++i) {
//         for (int j = 0; j < N; ++j) {
//             std::cout << matrix[i][j] << " ";
//         }
//         std::cout << "\n";
//     }
// }

#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter n, m: ";
    std::cin >> n >> m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < m; j++) {
            int x = arr[i][j];
            arr[i][j] = arr[i + n / 2][j];
            arr[i + n / 2][j] = x;  
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
