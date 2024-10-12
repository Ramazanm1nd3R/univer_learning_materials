// #include <iostream>

// int main() {
//     int N;
//     std::cout << "enter N: ";
//     std::cin >> N;

//     int* arr = new int[N];
//     int evennumbers = 0; 

//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//         if (arr[i] % 2 == 0) {
//             arr[evennumbers] = arr[i]; 
//             evennumbers++;
//         }
//     }

//     std::cout << "only even numbers in aray: " << evennumbers << std::endl;
//     std::cout << "even aray: ";
//     for (int i = 0; i < evennumbers; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

#include <iostream>
int main(){
    int n; std::cout << "enter n "; std::cin >> n;
    int* arr = new int[n]; 
    int evennum = 0;
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if (arr[i] % 2 == 0){
            arr[evennum] = arr[i];
            evennum++;
        }
    }
    std::cout << "only even num aray: " << evennum << std::endl << "even aray: ";
    for (int i = 0; i < evennum; i++){std::cout << arr[i] << " ";}
}