#include <iostream>
using namespace std;
int main()
{
    float num, sum = 0, ind = 0;
    while (true)
    {
        cin >> num;
        if (num == 0)
        {
            break;
        }
        sum += num;
        ind++;
    }
    float avg = sum / ind;
    cout << sum << endl << avg;
}