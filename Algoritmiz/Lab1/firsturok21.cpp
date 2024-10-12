#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter day (1-365) = ";
    cin >> a;
    if(a<=365)
    {
        b = a%7;
        switch (b)
        {
        case 1:
            cout << "monday" << " 1st day week";
            break;
        case 2:
            cout << "tuesday" << " 2nd day week";
            break;
        case 3: 
            cout << "wednesday" << " 3rd day week";
            break;
        case 4:
            cout << "thersday" << " 4th day week";
            break;
        case 5:
            cout << "Friday" << " 5th day week";
            break;
        case 6:
            cout << "Saturday" << " 6th day week";
            break;
        case 0:
            cout << "Sunday" << " 7th day week";
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "ERROR";
    }

}