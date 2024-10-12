#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << a/10 << " " << a%10 << endl;
    b = (a/10)+(a%10);
    cout << "summa = " << b;
}