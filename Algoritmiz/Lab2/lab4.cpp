#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A == B || A == C || B == C)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    
}