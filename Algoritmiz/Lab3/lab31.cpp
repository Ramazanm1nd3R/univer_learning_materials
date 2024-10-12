#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n = ";
    cin >> n;
    if (0 <= n && n < 10)
    {
        for(int i = n ;i >= 0; i = i - 1)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "error";
    }
}