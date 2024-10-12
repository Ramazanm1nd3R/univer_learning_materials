// #include <iostream>

// int main() {
//     int n, m;
//     std::cout << "enter n, m: ";
//     std::cin >> n >> m;

//     int** arr = new int*[n];
//     for (int i = 0; i < n; i++) {
//         arr[i] = new int[m];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> arr[i][j];
//         }
//     }

//     int ind = 0;
//     for (int j = 0; j < m; j++) {
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             if (arr[i][j] >= 0) {
//                 count++;
//             }
//         }
//         if (count == n) {
//             ind = j;
//             break;
//         }
//     }

//     if (ind == 0) {
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 std::cout << arr[i][j] << " ";
//             }
//             std::cout << std::endl;
//         }

//         // Clean up memory
//         for (int i = 0; i < n; i++) {
//             delete[] arr[i];
//         }
//         delete[] arr;

//         return 0;
//     }

//     // Create a new matrix with one less column
//     int** arr2 = new int*[n];
//     for (int i = 0; i < n; i++) {
//         arr2[i] = new int[m - 1];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0, k = 0; j < m; j++) {
//             if (j != ind) {
//                 arr2[i][k++] = arr[i][j];
//             }
//         }
//     }

//     std::cout << std::endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m - 1; j++) {
//             std::cout << arr2[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// }



// #include <iostream>

// int main() {
//     int n, m = 0;
//     std::cout << "enter n, m: ";
//     std::cin >> n >> m;
//     int** list = new int* [n];
//     for (int i = 0; i < n; i++) {
//         list[i] = new int[m];
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> list[i][j];
//         }
//     }
//     int k = -1;
//     int c = 0;
//     for (int i = m - 1; i >= 0; i--) {
//         c = 0;
//         for (int j = 0; j < n; j++) {
//             if (list[j][i] < 0) {
//                 c += 1;
//             }
//         }
//         if (c == 0) {
//             k = i;
//         }
//     }
//     if (k >= 0) {
//         for (int i = k; i < m - 1; i++) {
//             for (int j = 0; j < n; j++) {
//                 std::swap(list[j][i], list[j][i + 1]);
//             }
//         }
//         m -= 1;
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cout << list[i][j] << " ";
//         }
//         std::cout << "\n";
//     }
// }






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
    int k = -1;
    int c = 0;
    for (int i = m - 1; i >= 0; i--) {
        c = 0;
        for (int j = 0; j < n; j++) {
            if (list[j][i] < 0) {
                c += 1;
            }
        }
        if (c == 0) {
            k = i;
        }
    }
    if (k >= 0) {
        for (int i = k; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                std::swap(list[j][i], list[j][i + 1]);
            }
        }
        m -= 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << list[i][j] << " ";
        }
        std::cout << "\n";
    }
}