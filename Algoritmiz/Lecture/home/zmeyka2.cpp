#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    const int m = 5; 
    int x = 0;
    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = x;
            x++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}
