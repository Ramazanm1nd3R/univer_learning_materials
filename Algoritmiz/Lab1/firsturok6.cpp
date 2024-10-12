#include <iostream>
using namespace std;

int main()
{
 int A, B, C;
 cout << "A: ";
 cin >> A;
 cout << "B: ";
 cin >> B;
 cout << "C: ";
 cin >> C;
 int e = A;
 int r = B;
 A = r;
 B = C;
 C = e;
 cout << "A = " << A << endl;
 cout << "B = " << B << endl;
 cout << "C = " << C;     //A=B, B=C, C=A
}