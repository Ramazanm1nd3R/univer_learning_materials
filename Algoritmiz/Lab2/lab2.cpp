#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if(A%2==0 and B%2==0)
    {
        cout << "yes";
    }
    else if(A%2!=0 and B%2!=0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}