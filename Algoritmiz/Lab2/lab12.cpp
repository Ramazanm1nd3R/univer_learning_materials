#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int D = abs(A - B);
    int E = abs(A - C);

    if (D < E) 
    {
        cout << B << " " << D;
    } 
    else if (E < D) 
    {
        cout << C << " " << E;
    } 
    else 
    {
        if (B < C) 
        {
            cout << B << " " << D;
        }
        else 
        {
            cout << C << " " << E;
        }
    }
}

/*
There are three points on a number line A, B, and C. 
Find which point B or C is closest to A. 
Print its value and distance from A to the closest point. 
Distance must be an absolute value. 
If the B and C are at the same distance from A, print the least value.
*/