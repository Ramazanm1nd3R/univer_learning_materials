#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, y1, y2, a, b, c;
    a = (pow(x2 - x1, 2));
    b = (pow(y2 - y1, 2));
    c = (sqrt(a + b));
    cout << "x1 y1 = ";
    cin >> x1 >> y1;
    cout << "x2 y2 = ";
    cin >> x2 >> y2;
    cout << "Rasstoianye = " << c;
}