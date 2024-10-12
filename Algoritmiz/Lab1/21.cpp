#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, a, b, c, p, s;
    cout << "(x1, y1) = ";
    cin >> x1 >> y1;
    cout << "(x2, y2) = ";
    cin >> x2 >> y2;
    cout << "(x3, y3) = ";
    cin >> x3 >> y3;
    
    c = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    a = sqrt(pow((x1-x3),2)+pow((y1-y3),2));    

    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    cout << "S = " << s << endl << "P = " << p;
}