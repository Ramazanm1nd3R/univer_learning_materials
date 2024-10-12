#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if(X==0 && Y==0)
    {
        cout << "no";
    }
    else if(X>0 && Y>0)
    {
        cout << "no";
    }
    else if(X<0 && Y>0)
    {
        cout << "yes";
    } 
    else if(X<0 && Y<0)
    {
        cout << "yes";
    }
    else if(X>0 && Y<0)
    {
        cout << "no";
    }
}