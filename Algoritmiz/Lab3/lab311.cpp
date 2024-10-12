#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if(A <= 0 || B <= 0)
    {
        cout << "error";
    }
    else if(A >= B)
    {
        cout << "error";
    }
    else
    {
        for(int i = A; i <= B; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}