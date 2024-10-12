#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r, l, s, pi = 3.14;
    cout << "enter the R = ";
    cin >> r;
    l = 2*pi*r;
    s = pi*(pow(r,2));
    cout << "L = " << l << endl;
    cout << "S = " << s;
}