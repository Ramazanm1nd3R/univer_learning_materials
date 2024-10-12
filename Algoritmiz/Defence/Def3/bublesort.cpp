#include <iostream>
#include <vector>

int main() {
    int n, sevenIndex = -1;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        if (arr[i] == 7 && sevenIndex == -1) {
            sevenIndex = i;
        }
    }
    if (sevenIndex != -1) {
        for (int i = sevenIndex + 1; i < n; i++) {
            for (int j = sevenIndex + 1; j < n - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int x = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = x;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}
