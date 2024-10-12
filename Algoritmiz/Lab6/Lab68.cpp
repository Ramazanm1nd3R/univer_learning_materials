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
        for (int i = 0; i < n; i++) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
        cout << min << endl;
    }

}
