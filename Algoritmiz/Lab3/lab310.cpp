#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, fact = 1;
    cout << "enter = ";
    cin >> num;
    if(num<=0)
    {
        cout << "error";
    }
    else if(num>0)
    {
        for(int i = 1; i <= num; ++i)
        {
            fact *= i;
            sum += fact;
        }
        cout << sum;
    }
}