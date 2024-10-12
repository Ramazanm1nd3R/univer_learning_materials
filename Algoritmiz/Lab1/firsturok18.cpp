#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C;
    cout << "A, B, C = ";
    cin >> A >> B >> C;
    int asnwer;
    asnwer = abs(C-A)*abs(B-C);
    cout << "proizvedenye AC-BC = " << asnwer;
}