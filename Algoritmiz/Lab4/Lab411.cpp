#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, R;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    cin >> R;
    int x = num[0];
    int dd = abs(num[0] - R);
    for (int i = 1; i < N; i++)
    {
        int s = abs(num[i] - R);
        if (s <= dd)
        {
            x = num[i];
            dd = s;
        }
    }
    cout << x;
}