#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    if(A<=999 && A>0)
    {
        if(A>100)
        {
            if(A%2==0)
            {
                cout << "even three-digit number";
            }
        else
            {
                cout << "odd three-digit number";
            }
        }
        else if(A>10)
        {
            if(A%2==0)
                {
                    cout << "even two-digit number";
                }
            else
                {
                    cout << "odd two-digit number";
                }
        }
        else if(A<10)
        {
            if(A%2==0)
                {
                    cout << "even one-digit number";
                }
            else
                {
                    cout << "odd one-digit number";
                }
        }
    }
    else if(A==0)
    {
        cout << "zero nuber";
    }
}