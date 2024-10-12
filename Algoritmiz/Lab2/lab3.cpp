#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    if(A%2!=0 && A>=100 && A<=999)
    {
        cout << "yes";
    }
    else if(A%2!=0 && A<=-100 && A>=-999)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}