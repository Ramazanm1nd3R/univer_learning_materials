#include <iostream>
using namespace std;
int main()
{
    int a,b,c,e;
    cout << "enter the 3 chars nuber = ";
    cin >> a;
    b = a%100;
    c = b/10;
    e = a/100;
    a = b%10;
    b = (c*100) + (e*10) + a;
    cout << "answer = "<< b; 
}
