#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    bool a = true;
    int x = num[1] - num[0];
    for (int i = 2; i < N; i++)
    {
        if ((num[i] - num[i - 1]) != x)
        {
            a = false;
            break;
        }
    }
    if (a)
    {
        cout << x;
    }
    else 
    {
        cout << "0";
    }
}