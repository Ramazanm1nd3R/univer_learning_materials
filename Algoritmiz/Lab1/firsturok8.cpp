#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    if(A > B){
         cout << "ostatok ot A= " << A % B;
    }
    else
    {
        cout << "ERROR" << endl;
        cout << "A dolzno bit' bolshe B";
    }
}


