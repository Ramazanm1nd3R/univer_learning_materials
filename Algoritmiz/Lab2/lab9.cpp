#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    if(A>0)
    {
        if(A%2==0)
        {
            cout << "positive even number"; 
        }
        else
        {
            cout << "positive odd number";
        }
    }
else if(A<0)
    {
        if(A%2==0)
        {
            cout << "negative even number";
        }
        else
        {
            cout << "negative odd number";
        }
    }
else
{
    cout << "zero number";
}
}