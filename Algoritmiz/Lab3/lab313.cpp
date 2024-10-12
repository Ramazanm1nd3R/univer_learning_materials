#include <iostream>
using namespace std;
int main()
{
    int N;
    while(cin >> N)
    {
        if(N % 2 == 0)
        {
            cout << "yes";
            break;
        }
        else
        {
            cout << "no";
            break;
        }
    }
}