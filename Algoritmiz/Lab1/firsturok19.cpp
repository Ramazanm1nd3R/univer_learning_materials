#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "sec = ";
    cin >> N;
    if(N <= 86400)
    {
        cout << "s machala sutok proshlo " << (N/60)+60 << " minut, s uchetom 1 chasa";
    }
    else
    {
        cout << "eto bolshe 1 sutki";
    }
}