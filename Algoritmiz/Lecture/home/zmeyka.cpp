#include <iostream>
using namespace std;
int main()
{
    int n, m, x = 0;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = x;
            x++;
        }
        
    }
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}