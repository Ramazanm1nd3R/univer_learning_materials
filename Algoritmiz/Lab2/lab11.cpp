#include <iostream>
using namespace std;

int main()
{
    float A, B;
    int C;
    cin >> C >> A >> B;
    if(A!=0 && B!=0)
    {
        switch (C)
        {
        case 1:
            cout << A+B;
            break;
        case 2:
            cout << A-B;
            break;
        case 3:
            cout << A*B;
            break;
        case 4:
            cout << A/B;
            break;
        default:
            cout << "error";
            break;
        }
    }
    else
    {
        cout << "error";
    }
}