#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int D = min({A,B,C});
    int E = max({A,B,C});

    if(A>=0 && B>=0 && C>=0 && E-D>=0)
    {
        if(A==B || B==C || A==C)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
    }
    else
    {   
        cout << "no";
    }
}