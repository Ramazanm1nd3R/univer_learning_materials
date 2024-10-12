#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<vector<int>> array(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                sum += array[i][j];
            }
        }
    }

    cout << sum;
}
