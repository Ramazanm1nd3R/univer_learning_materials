#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    while (true)
    {
        cin >> num;
        if (num == 0)
        {
            break;
        }
        if (num % 2 != 0)
        {
            sum += num;
        }
    }
    cout << sum;
}