#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n = ";
    cin >> n;
    if(n<0)
    {
        for(int i = 0; i >= n; i = i - 2)
        {
            cout << i << " ";
        }
    }
    else if(n>0)
    {
        for(int j = 0; j <= n; j = j + 2)
        {
            cout << j << " ";
        }
    }
    else
    {
        cout << "error";
    }
}