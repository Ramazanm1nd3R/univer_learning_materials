#include <iostream>
using namespace std;

int main()
{
    float byte, kb;
    cout << "byte = ";
    cin >> byte;
    kb = byte / 1024;
    cout << byte << " in kb = " << kb;
}