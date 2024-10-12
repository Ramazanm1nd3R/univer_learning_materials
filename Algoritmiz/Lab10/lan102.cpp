#include <iostream>
int main(){
    int N, M;
    std::cout << "enter row, cal: ";
    std::cin >> N >> M;

    int** arr = new int*[M];
    for (int i = 0; i < M; i++){
        arr[i] = new int[N];
        for (int j = 0; j < N; j++){
            std::cin >> arr[i][j];
        }
    }
    int maxel = arr[0][0], minel = arr[0][0];
    int minrow = 0, maxrow = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (maxel < arr[i][j]){
                maxel = arr[i][j];
                maxrow = i;
            }
            if (minel > arr[i][j]){
                minel = arr[i][j];
                minrow = i;
            }
        }
    }
    for (int j = 0; j < N; j++){
        int x = arr[maxrow][j];
        arr[maxrow][j] = arr[minrow][j];
        arr[minrow][j] = x;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}