#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(abs(B-A)<abs(C-A))
    {
        cout << B << " " << B-A;
    }
    else
    {
        cout << C << " " << C-A;
    }
}