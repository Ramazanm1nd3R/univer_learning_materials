#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "A, B = ";
    cin >> A >> B;
    if(A<B || A==B)
    {
        for(B; B>=A; A++)
        cout << A << " ";
    }
    else
    {
        cout << "error";
    }
}