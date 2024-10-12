#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A;
    B = abs((A%100)%10);
    C = abs((A%100)/10);
    D = abs(A/100);
    if(D != B && D != C && B != C)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}