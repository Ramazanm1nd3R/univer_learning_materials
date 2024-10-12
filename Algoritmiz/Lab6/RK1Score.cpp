#include <iostream>
#include <vector>
int main(){
    int n;
    double l = 0, sum = 0;
    std::cin >> n;
    l = n;
    std::vector<double> arr(n);
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    std::cout << sum / l << " ball";
}