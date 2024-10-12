#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<double>> array(n, vector<double>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    vector<double> x;  // Replace "flattenedArray" with "x"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x.push_back(array[i][j]);
        }
    }

    for (int i = 0; i < x.size() - 1; i++) {
        for (int j = 0; j < x.size() - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                double temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    } // бабле СОрТ

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x[i * m + j] << " ";
        }
        cout << endl;
    }
}
