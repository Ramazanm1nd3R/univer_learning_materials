#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number = ";
    while(cin >> num)
    {
        if(num > 0)
        {
            for(int i = 0; num >= i; i++)
            {
                cout << i << endl;
            }
            break;
        }
        else if(num < 0)
        {
            for(int i = 0; num <= i; i--)
            {
                cout << i << endl;
            }
        }
        else if(num == 0)
        {
            cout << "0";
        }
    }
}