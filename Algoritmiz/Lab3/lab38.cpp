#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, c = 0.0;
    while(cin >> n)
    {
        if (n==0)
        {
            break;
        }
        sum += n;
        c++;
    }
    if (c==0)
    {
        cout << " " << endl;
    }
    else 
    {
        float avg = (sum)/c;
        cout << sum << " " << avg;
    }
}