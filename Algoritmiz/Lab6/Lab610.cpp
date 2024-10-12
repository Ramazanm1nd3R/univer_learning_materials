#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    int count = 0;    
    cin >> n >> m;

    vector<vector<int>> array(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n && count < k; i++) {
        for (int j = 0; j < m && count < k; j++) {
            if (array[i][j] < 0) {
                cout << array[i][j] << " ";
                count++;
            }
        }
    }
    cout << endl;   
}
