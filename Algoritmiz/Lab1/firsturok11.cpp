#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "vvedy 3 znachnoe chislo = ";
    cin >> a;
    b = a/100;
    c = (a%100)/10;
    d = (a%100)%10;
    cout << b << " " << c << " " << d << " " << endl;
    e = (b+c+d)/3;
    cout << "srednee chislo = " << e;
}
    