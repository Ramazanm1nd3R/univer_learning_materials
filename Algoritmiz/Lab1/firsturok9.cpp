#include <iostream>
using namespace std;
int main()
{
    float Xkg, Ykg, A, B;
    cout << "choclade kg = ";
    cin >> Xkg;
    cout << "konfet kg = ";
    cin >> Ykg;
    cout << "1 kg choclate price = ";
    cin >> A;
    cout << "1 kg konfet price = ";
    cin >> B;
    float D, E;
    D = A * Xkg;
    E = B * Ykg;
    cout << "za " << Xkg << " kg " << D << " tenge" << endl;
    cout << "za " << Ykg << " kg " << E << " tenge" << endl;
    if(D>E)
    {
        cout << "choclate dorozhe v " << D / E << " raza";
    }
    else
    {
        cout << "konfety dorozhe ";
    }
}