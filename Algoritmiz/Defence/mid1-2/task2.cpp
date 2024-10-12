#include <iostream>
bool simplenumber(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> arr[i][j];
    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (simplenumber(arr[i][j])) {
                arr[i][j] *= arr[i][j];
            }
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
