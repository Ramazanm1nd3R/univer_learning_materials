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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (array[i][j] < 0) {
                cout << 'x' << ' ';
            } 
            else {
                cout << array[i][j] << ' ';
            }
        }
        cout << endl;
    }

}
