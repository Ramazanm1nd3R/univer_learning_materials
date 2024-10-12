#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r1, r2, s1, s2, pi = 3.14;
    cout << "R1, R2 = ";
    cin >> r1 >> r2;
    s1 = (pow(r1,2))*pi;
    s2 = (pow(r2,2))*pi;    
    
    if(r1>r2)
    {
    cout << "S1 = " << s1 << endl;
    cout << "S2 = " << s2 << endl;
    cout << "S3 = " << s1-s2;
    }
    else
    {
        cout << "ERROR";
    }
}