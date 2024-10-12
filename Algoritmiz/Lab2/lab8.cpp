#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C, D, E;
    cin >> A >> B >> C;
    D = max({A,B,C});

    if(D == A)
    {
        E = max({B,C});
        cout << D+E;
    }
    else if(D == B)
    {
        E = max({A,C});
        cout << D+E;
    }
    else
    {
        E = max({A,B});
        cout << C+E;
    }
}