// task 1

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> array(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> array[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         int num = 0;
//         for (int j = 0; j < m; j++) {
//             if (array[i][j] > 0) {
//                 num++;
//             }
//         }
//         cout << num << endl;
//     }
// }

//task 2

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> arr[i][j];
//         }
//     }
//     int max = arr[0][0];
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (max < arr[i][j]){
//                 max = arr[i][j];
//             }
//         }
//     }
//     std::cout << max;
// }

//task 3

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> arr[i][j];
//         }
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] < 0){
//                 std::cout << 'x' << " ";
//             }
//             else {
//                 std::cout << arr[i][j] << " ";
//             }
//         }
//         std::cout << std::endl;
//     }
// }

//task 4

// #include <iostream>
// #include <vector>
// int main(){
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cin >> arr[i][j];
//         }
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if (i + j == n - 1){
//                 std::cout << "x" << " ";
//             }
//             else {
//                 std::cout << arr[i][j] << " ";
//             }
//         }
//         std::cout << std::endl;
//     }
// }

//task 5

// #include <iostream>
// #include <vector>
// int main(){
//     int n, sum = 0;
//     std::cin >> n;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if (i != j){
//                 sum += arr[i][j];
//             }
//         }
//     }
//     std::cout << sum;
// }

//task 6

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         int max = arr[i][0];
//         for (int j = 0; j < m; j++){
//             if (max < arr[i][j]){
//                 max = arr[i][j];
//             }
//         }
//         std::cout << max << " ";
//     }
// }

//tasl 7

#include <iostream>
#include <vector>
int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> arr(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }
    if (n )