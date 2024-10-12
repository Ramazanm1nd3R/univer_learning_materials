#include <iostream>
using namespace std;
int main()
{
    int num;
    float sum = 0;
    cout << "enter number = ";
    while(cin >> num)
    {
        if(num==0)
        {
            break;
        }
        else if(num % 2 != 0)
        {
            sum = sum + num;
        }
    }
    cout << sum;
}