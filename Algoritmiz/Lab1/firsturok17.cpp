#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "sec = ";
    cin >> N;
    if(N <= 86400)
    {
        cout << "s nachala sutok proshlo " << N/3600 << " chasov, " << N/60 << " min";
    }
    else
    {
        cout << "proshlo " << N/86400 << " dney " << (N%86400)/3600 << " chasov " << (N%86400)/60;
    }
}