#include <iostream>
#include <vector>
using namespace std;
  
  int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        cin >> arr[i][j];
    }
    if (n % 2 != 0) {
        for (int i = n / 2 + 1; i < n; i++) {
        for (int j = 0; j < n; j++)
        cout << arr[i][j] << " " ;
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    cout << arr[n / 2][j] << " ";
    cout << endl;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++)
        cout << arr[i][j] << " ";
        cout << endl;
    }
}
  
   else {
    for (int i = n / 2; i < n; i++) {
        for (int j = 0; j < n; j++)
        cout << arr[i][j] << " ";
        cout << endl;
}
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++)
        cout << arr[i][j] << " ";
        cout << endl;
    }
  }
}