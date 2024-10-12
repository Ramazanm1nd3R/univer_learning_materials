#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if(X==0 && Y==0)
    {
        cout << "0";
    }
    else if(X==0)
    {
        cout << "Y";
    }
    else if(Y==0)
    {
        cout << "X";
    }
    else if(X>0 && Y>0)
    {
        cout << "1";
    }
    else if(X<0 && Y>0)
    {
        cout << "2";
    } 
    else if(X<0 && Y<0)
    {
        cout << "3";
    }
    else if(X>0 && Y<0)
    {
        cout << "4";
    }
}