// 1. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should output number of positive numbers in each row (zero is neither positive, nor negative).

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         int sum = 0;
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] > 0){
//                 sum++;
//             }
//         }
//     std::cout << sum << " ";
//     }

// }

// 2. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should output the maximum element of the array.

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     int max = arr[0][0];
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] > max){
//                 max = arr[i][j];
//             }
//         }
//     }
//     std::cout << max << " max element";
// }

// 3. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers and store them in two-dimensional array. Then the program should replace negative numbers with 'x' on printing.

// Input format
// two integers N and M

// N * M numbers stored in two dimensional array

// Output format
// altered array with negative numbers replaced with 'x'

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] < 0){
//                 std::cout << "x" << " ";
//             }
//             else{
//                 std::cout << arr[i][j] << " "; 
//             }
//         }
//         std::cout << std::endl;
//     }
// }

// 4. Write a program that asks a user to input an integer n. The program should prompt the user to input n*n integers and store them in two-dimensional array (n x n). Then the program should output all elements of the array replacing all elements of antidiagonal with 'x'.

// #include <iostream>
// #include <vector>
// int main(){
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(n));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n;j++){
//             if (j + i == n - 1){
//                 std::cout << "x" << " ";
//             }
//             else{
//                 std::cout << arr[i][j] << " ";
//             }
//         }
//         std::cout << std::endl;

//     }
// }

// 5. Write a program that asks a user to input an integer n. The program should prompt the user to input n*n integers and store them in two-dimensional array (n x n). Then the program should the sum of all elements that are not in the main diagonal.

// #include <iostream>
// #include <vector>
// int main(){
//     int n, sum = 0;
//     std::cin >> n;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(n));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
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

// 6. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should output the maximum element in each row.

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++){
//         int max = arr[i][0];
//         for (int j = 0; j< m;j++){
//             if (arr[i][j] > max){
//                 max = arr[i][j];
//             }
//         }
//         std::cout << max << " ";
//     }
// } 

// 7. Write a program that asks a user to input an integer n. The program should prompt the user to input n*n integers and store them in two-dimensional array (n x n). Then the program should change the elements in the first horizontal half with the second horizontal half.

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> arr(n, vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }



//     if (n >= 5) {
//         for (int j = 0; j < n; j++) {
//             int x = arr[0][j];
//             arr[0][j] = arr[3][j];
//             arr[3][j] = x;
//         }
//         for (int j = 0; j < n; j++) {
//             int x = arr[1][j];
//             arr[1][j] = arr[4][j];
//             arr[4][j] = x;
//         }
//         for (int j = 0; j < n; j++) {
//             int x = arr[2][j];
//             arr[2][j] = arr[2][j];
//             arr[2][j] = x;
//         }

//     }
//     else if (n < 5)
//     {
//         for (int j = 0; j < n; j++) {
//             int x = arr[0][j];
//             arr[0][j] = arr[n - 1][j];
//             arr[n - 1][j] = x;
//     }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }



// #include <iostream>
// #include <vector>

// int main() {
//     int n;
//     std::cin >> n;

//     std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cin >> matrix[i][j];
//         }
//     }

//     std::vector<int> swapIndices;

//     if (n == 1) {
//         swapIndices = {1};
//     } else if (n == 2) {
//         swapIndices = {2, 1};
//     } else if (n == 3) {
//         swapIndices = {3, 2, 1};
//     } else if (n == 4) {
//         swapIndices = {3, 4, 1, 2};
//     } else if (n == 5) {
//         swapIndices = {4, 5, 3, 1, 2};
//     } else {
//         std::cout << "Сколько там проверок боже" << std::endl;
//         return 1;
//     }

//     std::vector<std::vector<int>> swappedMatrix(n, std::vector<int>(n));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             swappedMatrix[i][j] = matrix[swapIndices[i] - 1][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cout << swappedMatrix[i][j];
//             if (j < n - 1) {
//                 std::cout << ' ';
//             }
//         }
//         std::cout << std::endl;
//     }
// }

// 8. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should output the minimum element in each column.

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++){
//         int min = arr[0][i];
//         for (int j = 0; j < n; j++){
//             if (arr[i][j] < min){
//                 min = arr[i][j];
//             }
//         }
//         std::cout << min << std::endl;
//     }
// }

// 9. Write a program that asks a user to input an integer n and m. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should swap a minimum element with a maximum one in each column and print the array. (if it is two or more maximum and minimums in the column, take the last of it)

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

//     for (int j = 0; j < m; j++) {
//         int min = array[0][j];
//         int max = array[0][j];
//         int min1 = 0, max1 = 0;

//         for (int i = 1; i < n; i++) {
//             if (array[i][j] <= min) {
//                 min = array[i][j];
//                 min1 = i;
//             }
//             if (array[i][j] >= max) {
//                 max = array[i][j];
//                 max1 = i;
//             }
//         }

//         if (min1 != max1) {
//             int x = array[min1][j];
//             array[min1][j] = array[max1][j];
//             array[max1][j] = x;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << array[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

// 10. Write a program that asks a user to input an integer n and m that are number of rows and columns for an array. The program should prompt the user to input n*m integers, to store them in two-dimensional array (n x m) and an integer k. Then the program should the first k negative elements in the array.(If k is more than the number of negative elements, print all negatives that we have in array)

// #include <iostream>
// #include <vector>
// int main(){
//     int n, m, negative = 0, k;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> arr(n, std::vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     std::cin >> k;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if (arr[i][j] < 0){
//                 std::cout << arr[i][j] << " ";
//                 negative++;
//                 if (negative >= k){
//                     break;
//                 }
//             }
//         }
//     }
// }

// 11. The program should prompt the user to input n*m integers and store them in two-dimensional array (n x m). Then the program should output all elements of the array in ascending order.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<double>> array(n, vector<double>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> array[i][j];
//         }
//     }
//     vector<double> x; 
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             x.push_back(array[i][j]);
//         }
//     }

//     for (int i = 0; i < x.size() - 1; i++) {
//         for (int j = 0; j < x.size() - i - 1; j++) {
//             if (x[j] > x[j + 1]) {
//                 double temp = x[j];
//                 x[j] = x[j + 1];
//                 x[j + 1] = temp;
//             }
//         }
//     } // бабле СОрТ

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << x[i * m + j] << " ";
//         }
//         cout << endl;
//     }
// }
 