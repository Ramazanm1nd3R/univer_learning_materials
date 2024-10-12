#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> array(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        int min = array[0][j];
        int max = array[0][j];
        int min1 = 0, max1 = 0;

        for (int i = 1; i < n; i++) {
            if (array[i][j] <= min) {
                min = array[i][j];
                min1 = i;
            }
            if (array[i][j] >= max) {
                max = array[i][j];
                max1 = i;
            }
        }

        if (min1 != max1) {
            int x = array[min1][j];
            array[min1][j] = array[max1][j];
            array[max1][j] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}
