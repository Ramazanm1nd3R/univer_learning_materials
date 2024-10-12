#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, b = 1;
    cout << "enter number = ";
    cin >> n;
    for(int i = 1; i <= n; ++i)
        {
            int A = 2 * i * b;
            sum += A;
            b = -b;
            cout << sum << " ";
        } 
        cout << sum;
}