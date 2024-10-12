#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int losescore = 0;
        for (int j = 0; j < n; j++){
            if (arr[i][j] == 0 && i != j){
                losescore++;
            }
        }
        if (losescore == 0){
            std::cout << i + 1 << " ";
        }
    }
}