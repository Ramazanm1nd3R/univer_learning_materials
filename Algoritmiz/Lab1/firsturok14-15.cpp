#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter day (1-365) = ";
    cin >> a;
    
    if(a <= 365)
    {
        b = a%7;
        switch (b)
        {
        case 0:
            cout << "sunday";
            break;
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thersday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "saturday";
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "ERROR" << endl << "enter the number in 1-365";
    }


}   