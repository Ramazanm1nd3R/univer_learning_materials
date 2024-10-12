#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int c = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    int a = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    int b = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    int p = (a+b+c)/2;
    int S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "p = " << p << endl << "s = " << S;
}