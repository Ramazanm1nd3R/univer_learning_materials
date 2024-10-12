#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;
     switch (K)
    {
    case 1:
    cout << "fail";
    break;
    case 2:
        cout << "unsatisfactory";
    break;
    case 3:
        cout << "satisfactory";
    break;
    case 4:
        cout << "good";
    break;
    case 5:
        cout << "excellent";
    break;
    default:
        cout << "error";
    break;
}
}