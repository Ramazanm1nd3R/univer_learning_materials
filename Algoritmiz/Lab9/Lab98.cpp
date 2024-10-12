#include <iostream>

int main() {
    int N, K, M;

    std::cout << "Enter N: ";
    std::cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    std::cout << "enter K: "; std::cin >> K;

    std::cout << "Enter M: "; std::cin >> M;

    int *arr2 = new int[N + M];
    int n2 = 0;

    for (int i = 0; i < K; i++) {
        arr2[n2] = arr[i];
        n2++;
    }

    for (int i = 0; i < M; i++) {
        arr2[n2] = 0;
        n2++;
    }


    for (int i = K; i < N; i++) {
        arr2[n2] = arr[i];
        n2++;
    }

    
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
}
