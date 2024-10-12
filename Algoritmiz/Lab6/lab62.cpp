#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> array(n, vector<int>(m));
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    cout << max;
}
