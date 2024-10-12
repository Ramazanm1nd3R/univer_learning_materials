#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, t;
    cout << "enter = ";
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        t = 1.0 / (2 * i + 1);
        if(i % 2 == 1)  
        {
            t = -t;
        }
        sum += t;
        cout << sum << " ";
    }
    cout << endl << sum;
}