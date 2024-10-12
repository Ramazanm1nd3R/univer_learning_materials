#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0;
    cout << "enter number = ";
    cin >> n;
    if(n>0)
    {
        for(int i = 1; i <= n; ++i)
        {
            sum += 1.0/i;
        }
        cout << sum;
    }
    else
    {
        cout << "error";
    }
}