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

    int k, index = 0;
    std::cout << "Enter k: ";
    std::cin >> k;

    int** arr2 = new int*[n - 1];
    for (int i = 0; i < n - 1; i++) {
        arr2[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        if (i != k - 1) {
            for (int j = 0; j < m; j++) {
                arr2[index][j] = arr[i][j];
            }
            index++;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}



// #include <iostream>

// int main() {
//     int n, m;
//     std::cout << "Enter n, m: ";
//     std::cin >> n >> m;

//     // Create the matrix
//     int** arr = new int*[n];
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[m];
//     }

//     // Input values into the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> arr[i][j];
//         }
//     }

//     int k;
//     std::cout << "Enter k (1 to M): ";
//     std::cin >> k;

//     // Validate k
//     if (k < 1 || k > n) {
//         std::cerr << "Invalid value of k. Exiting..." << std::endl;
//         return 1; // Exit with an error code
//     }

//     // Create a new matrix with one less row
//     int** arr2 = new int*[n - 1];
//     for (int i = 0; i < n - 1; i++) {
//         arr2[i] = new int[m];
//     }

//     // Copy values from arr to arr2, skipping the row with index k-1
//     int index = 0;
//     for (int i = 0; i < n; i++) {
//         if (i != k - 1) {
//             for (int j = 0; j < m; j++) {
//                 arr2[index][j] = arr[i][j];
//             }
//             index++;
//         }
//     }

//     // Output the resulting matrix arr2
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cout << arr2[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     // Don't forget to free the allocated memory
//     for (int i = 0; i < n; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     for (int i = 0; i < n - 1; i++) {
//         delete[] arr2[i];
//     }
//     delete[] arr2;

//     return 0;
// }
