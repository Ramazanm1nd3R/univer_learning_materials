#include <iostream>
int main(){
    int n, sum = 0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        int num = arr[i];
        while (num != 0){
            int x = num % 10;
            sum += x;
            num = num / 10;
        }
    }
    std::cout << sum;
}