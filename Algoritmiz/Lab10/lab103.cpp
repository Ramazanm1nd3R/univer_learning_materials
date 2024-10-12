// #include <iostream>
// int main(){
//     int n, m;
//     std::cout << "enter n, m: ";
//     std::cin >> n >> m;
//     int** arr = new int*[n];
//     for (int i = 0; i < n; i++){
//         arr[i] = new int[m];
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     int ind = -1;      
//     int count = 0; 
//     for (int i = 0; i < m; i++){
//         count = 0;
//         for (int j = 0; j < n; j++){
//             if (arr[i][j] < 0){
//                 count++;
//             }
//         }
//         if (count == 0){
//             ind = i;
//         }
//     }
//     if (ind != -1){
//         for (int i = 0; i < n; i++){
//             int x = arr[i][0];
//             arr[i][0] = arr[i][ind];   
//             arr[i][ind] = x;
//         }
//     }

//     std::cout << std::endl;

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cout << arr[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// }





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
    int ind = 0, count = 0;
    for (int i = 0; i < m; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if(arr[i][j] < 0){
                count++;
            }
        }
        if (count == 0){
            ind = i;
        }
    } 
    if (ind != 0){
        for (int i = 0; i < n; i++){
            int x = arr[i][0];
            arr[i][0] = arr[i][ind];
            arr[i][ind] = x;
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