#include <iostream>
int main(){
    int n, m;
    std::cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int avgnum = 0;
        for (int j = 0; j < m; j++){
            avgnum += i;
        }
        avgnum = avgnum / m;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] <= avgnum)
        }
    }
}