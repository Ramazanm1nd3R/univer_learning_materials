#include <iostream>
int main(){
    int n, m;
    std::cout << "enter n, m: ";
    std::cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
        }
    }
    int** arr2 = new int*[n];
    for (int i = 0; i < n; i++){
        arr2[i] = new int[m - 1];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m - 1; j++){
            arr2[i][j] = arr[i][j];
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m - 1; j++){
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}