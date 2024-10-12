#include <iostream>
int main(){
    int n, m;
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
    for (int i = 0; i < n; i++){
        arr[i][m] = 0;
    }
    int index = 0, count = 0;
    for (int i = 0; i < m; i++){
        count = 0; 
        for (int j = 0; j < n; j++){
            if (arr[i][j] > 0){
                count++;
            }
        }
        if (count == 0){
            index = i;
        }

    }
    
    if (index >= 0){
        for (int i = m; i < index + 1; i--){
            for (int j = 0; j < n; j++){
                int x = arr[i][j];
                arr[i][j] = arr[i][j - 1];
                arr[i][j - 1] = x;
            }
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m + 1; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}