1.
#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    int indexK;
    std::cout << "enter K: ";
    std::cin >> indexK;

    for (int i = indexK; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < N - 1; i++) {
        std::cout << arr[i] << " ";
    }
}

2.

#include <iostream>
int main(){
    int n, k, l; std::cout << "enter N, K, L: "; std::cin >> n >> k >> l;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){std::cin >> arr[i];}

    int del = l - k + 1;
    for (int i = k; i < n - del; i++){arr[i] = arr[i + del];}
    for (int i = 0; i < n - del; i++){std::cout << arr[i] << " ";}
}

3.

#include <iostream>
int main(){
    int n; std::cout << "enter n: "; std::cin >> n;
    int* arr = new int[n];
    int evennum = 0;
    for (int i = 0; i < n; i++){std::cin >> arr[i];}
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            arr[evennum] = arr[i];
            evennum++;
        }
    }
    for (int i = 0; i < evennum; i++){std::cout << arr[i] << " ";}
    std::cout << std::endl << "even: " << evennum;
}

4.

#include <iostream>
int main(){
    int n; std::cout << "enter n: "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int n2 = n / 2 + n % 2;
    for (int i = 1; i <= n2; i++){
        arr[i] = arr[i * 2 - 1];
    }
    for (int i = 1; i < n2; i++){
        std::cout << arr[i] << " ";
    }
}

5.

#include <iostream>
int main(){
    int n; std::cout << "enter n: "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int* arr2 = new int[n]; int arr2size = 0;
    for (int i = 0; i < n; i++){
        if (arr2size == 0 || arr[i] != arr2[arr2size - 1]){
            arr2[arr2size] = arr[i];
            arr2size++;
        }
    }
    for (int i = 0; i < arr2size; i++){
        std::cout << arr2[i] << " ";
    }
}

6.

#include <iostream>
int main(){
    int n; std::cout << "enter n: "; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int k;std::cout << "enter k: "; std::cin >> k;\
    int* arr2 = new int[n + 1];
    for (int i = 0; i < k - 1; i++){
        arr2[i] = arr[i];
    }
    arr2[k - 1] = 0;
    for (int i = k; i <= n; i++){
        arr2[i] = arr[i - 1];
    }
    for (int i = 0; i < n + 1; i++){
        std::cout << arr2[i] << " ";
    }
}

7.

#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int minindex = 0, maxindex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
    }

    int* arr2 = new int[n + 2];
    int newindex = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == minindex) {
            arr2[newindex] = 0;
            newindex++;
        }
        arr2[newindex] = arr[i];
        newindex++;
        if (i == maxindex && i != n - 1) {
            arr2[newindex] = 0;
            newindex++;
        }
    }

    std::cout << "Result: ";
    for (int i = 0; i < n + 2; i++) {
        std::cout << arr2[i] << " ";
    }
}

8.

#include <iostream>
int main(){
    int n, k, m;
    std::cout << "enter n: ";
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << "enter k: "; std::cin >> k;
    std::cout << "enter m: "; std::cin >> m;
    int* arr2 = new int[n + m];
    int n2 = 0;
    for (int i = 0; i < k; i++){
        arr2[n2] = arr[i];
        n2++;
    }
    for (int i = 0; i < m; i++){
        arr2[n2] = 0;
        n2++;
    }
    for (int i = k; i < n; i++){
        arr2[n2] = arr[i];
        n2++;
    }
    for (int i = 0; i < n2; i++){
        std::cout << arr2[i] << " ";
    }
}




9. 


#include <iostream>
int main(){
    int n, c = 1, m = 0;
    std::cout << "enter n: "; std::cin >> n;
    int n2 = n + (n / 2);
    int* arr = new int[n2];
    for (int i = 0; i < n2; i++){
        std::cin >> arr[i];
    }
    for (int i = n; i < n2; i++){
        arr[i] = 0;
    }
    for (int i = n; i < n2; i++){
        for (int j = i - 1; j >= c; j--){
            std::swap(arr[j], arr[j + 1]);
            m = j;
        }
        arr[m] = arr[m + 1];
        c += 3;
    }
    for (int i = 0; i < n2; i++){
        std::cout << arr[i] << " ";
    }
}

10.

#include <iostream>
int main(){
    int n; std::cin >> n; int index = 0;
    int n2 = n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if (arr[i] < 0){
            n2++;
        }
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


11.














12.

#include <iostream>
int main(){
    int n; std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int n2 = 0;
    for (int i = 0; i < n; i++){
        bool dupl = false;
        for (int j = 0; j < n2; j++){
            if (arr[i] == arr[j]){
                dupl = true;
                break;
            }
        }
        if (!dupl){ 
            arr[n2] = arr[i];
            n2++;
        }
    }
    for (int i = 0; i < n2; i++){
        std::cout << arr[i] << " ";
    }
}