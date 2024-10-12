#include <iostream>
int main(){
    int n, index = 0; std::cout << "enter n "; std::cin >> n; int n2 = n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i]; if (arr[i] < 0){n2++;}
    }
    int* arr2 = new int[n2];
    for (int i = 0; i < n; i++){
        arr2[index] = arr[i];
        index++;
        if (arr[i] < 0){
            arr2[index] = 0;
            index++;
        }
    }
    for (int i = 0; i < n2; i++){std::cout << arr2[i] << " ";}
}












































// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter N: ";
//     std::cin >> N;

//     int* arr = new int[N];
//     int N2 = N;

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//         if (arr[i] < 0) {
//             N2++;  
//         }
//     }

//     int* arr2 = new int[N2];
//     int index = 0;

//     for (int i = 0; i < N; i++) {
//         arr2[index++] = arr[i];
//         if (arr[i] < 0) {
//             arr2[index++] = 0; 
//         }
//     }

//     for (int i = 0; i < N2; i++) {
//         std::cout << arr2[i] << " ";
//     }

// }
