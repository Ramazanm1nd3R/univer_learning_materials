#include <iostream>
using namespace std;

int main()
{
    float v1, v2, S, T, answer;
    cout << "1st auto speed km/h = ";
    cin >> v1;
    cout << "2nd speed km/h = ";
    cin >> v2;
    cout << "iznachalnoye rasstoyanye km = ";
    cin >> S;
    cout << "scol'ko chasov proshlo = ";
    cin >> T;
    answer = (v1*T) + (v2*T) + S;
    cout << "cherez " << T << " chasov, budut v " << answer << " km " << endl << " drug ot druga ";  
}