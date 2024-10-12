// // #include <iostream>
// // using namespace std;
// // void ins(int**& a, int n, int& m, int k) {
// //     for (int i = 0; i < n; i++) {
// //         int* arr = new int[m + 1];
// //         for (int j = 0; j <= m; j++) {
// //             if (j < k) {
// //                 arr[j] = a[i][j];
// //             } else if (j == k) {
// //                 arr[j] = 0;
// //             } else {
// //                 arr[j] = a[i][j - 1];
// //             }
// //         }
// //     }
// //     m++;
// // }
// // int main() {
// //     int n, m, mk=0,ok=0;
// //     cin >> n >> m;
// //     int** a = new int* [n];
// //     for (int i = 0; i < n; i++) {
// //         a[i] = new int[m];
// //     }
// //     for (int i = 0; i < n; i++) {
// //         for (int j = 0; j < m; j++) {
// //             cin >> a[i][j];
// //         }
// //     }

// //     for (int i = 0; i < m; i++) {
// //         int k=0;
// //         for (int j = 0; j < n; j++) {
// //             if (a[j][i]<0){
// //                 k++;
// //             }
// //         }
// //         if (k==n){
// //             mk=i;
// //             ok++;
// //         }
// //     }
// //     if (ok!=0){
// //         ins(a, n, m, mk+1);}
// //     std::cout << std::endl;
// //     for (int i = 0; i < n; i++) {
// //         for (int j = 0; j < m; j++) {
// //             cout << a[i][j] << " ";
// //         }
// //         cout << endl;
// //     }
// // }






// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, mk = 0, ok = 0;
//     cin >> n >> m;
//     int** a = new int*[n];
//     for (int i = 0; i < n; i++) {
//         a[i] = new int[m];
//     }

//     // Input matrix elements
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     // Check for columns with all negative elements
//     for (int i = 0; i < m; i++) {
//         int k = 0;
//         for (int j = 0; j < n; j++) {
//             if (a[j][i] < 0) {
//                 k++;
//             }
//         }
//         if (k == n) {
//             mk = i;
//             ok++;
//         }
//     }

//     // Insert a new column if there is at least one column with all negative elements
//     if (ok != 0) {
//         for (int i = 0; i < n; i++) {
//             int* arr = new int[m + 1];
//             for (int j = 0; j <= m; j++) {
//                 if (j < mk) {
//                     arr[j] = a[i][j];
//                 } else if (j == mk) {
//                     arr[j] = 0;
//                 } else {
//                     arr[j] = a[i][j - 1];
//                 }
//             }
//             delete[] a[i];
//             a[i] = arr;
//         }
//         m++;
//     }

//     // Output the modified matrix
//     cout << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Deallocate memory
//     for (int i = 0; i < n; i++) {
//         delete[] a[i];
//     }
//     delete[] a;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, mk = 0, ok = 0;
//     cin >> n >> m;
//     int** a = new int*[n];
//     for (int i = 0; i < n; i++) {
//         a[i] = new int[m];
//     }

//     // Input matrix elements
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     // Check for columns with all negative elements
//     for (int i = 0; i < m; i++) {
//         int k = 0;
//         for (int j = 0; j < n; j++) {
//             if (a[j][i] < 0) {
//                 k++;
//             }
//         }
//         if (k == n) {
//             mk = i;
//             ok++;
//         }
//     }

//     // Insert a new column if there is at least one column with all negative elements
//     if (ok != 0) {
//         for (int i = 0; i < n; i++) {
//             int* arr = new int[m + 1];
//             for (int j = 0; j <= m; j++) {
//                 if (j < mk) {
//                     arr[j] = a[i][j];
//                 } else if (j == mk) {
//                     arr[j] = 0;
//                 } else {
//                     arr[j] = a[i][j - 1];
//                 }
//             }
//             delete[] a[i];
//             a[i] = arr;
//         }
//         m++;
//     }

//     // Output the modified matrix
//     cout << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Output a row of zeros if all values are negative
//     if (ok == m) {
//         for (int i = 0; i < m; i++) {
//             cout << "0 ";
//         }
//         cout << endl;
//     }

//     // Deallocate memory
//     for (int i = 0; i < n; i++) {
//         delete[] a[i];
//     }
//     delete[] a;

//     return 0;
// }




#include <iostream>

int main() {
  int n, m = 0;
  std::cin >> n >> m;
  int** list = new int* [n];
  for (int i = 0; i < n; i++) {
    list[i] = new int[m + 1];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> list[i][j];
    }
  }

  int saverIn = -1;
  int c = 0;

  for (int i = 0; i < m; i++) {
    c = 0;
    for (int j = 0; j < n; j++) {
      if (list[j][i] > 0) {
        c += 1;
      }
    }
    if (c == 0) {
      saverIn = i;
    }
  }

  if (saverIn >= 0) {
    for (int i = m; i > saverIn + 1; i--) {
      for (int j = 0; j < n; j++) {
        list[j][i] = list[j][i - 1];
      }
    }
    for (int j = 0; j < n; j++) {
      list[j][saverIn + 1] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m + 1; j++) {
      std::cout << list[i][j] << " ";
    }
    std::cout << "\n";
  }
}
