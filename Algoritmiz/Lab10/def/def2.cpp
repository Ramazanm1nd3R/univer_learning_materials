#include <iostream>
int main(){
    int n, m;
    std::cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    int count = 0;
    int ind = 0;
    for (int i = 0; i < n; i++){
        count = 0;
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            if (arr[i][j] % 2 == 0){
                count++;
            }
        }
        if (count == m){
            ind = i;
        }
    }
    if (ind != 0){
        for (int j = 0; j < m; j++){
            int x = arr[0][j];
            arr[0][j] = arr[ind][j];
            arr[ind][j] = x;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

