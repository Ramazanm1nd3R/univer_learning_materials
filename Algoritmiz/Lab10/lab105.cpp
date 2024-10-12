#include <iostream>
int main(){
    int n, m, k = 2;
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
    int** arr2 = new int*[n - 1];
    for (int i = 0; i < n - 1; i++){
        arr2[i] = new int[m];
    }
    int index = 0;
    for (int i = 0; i < n; i++){
        if (i != k - 1){
            for (int j = 0; j < m; j++){
                arr2[index][j] = arr[i][j];
            }
            index++;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < m; j++){
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}