#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "enter number = ";
    cin >> n;
    if(n>=0)
    {
        for(int i = 1; i<=n; ++i)
        {
            fact *= i;
        }
        cout << fact;
    }
    else
    {
        cout << "error";
    }
}