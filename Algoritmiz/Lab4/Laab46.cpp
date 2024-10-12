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
    for (int i = 0; i < N; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << " ";
        }
    }
    cout << endl;
    for (N; N >= 0; N--)
    {
        if (num[N] % 2 != 0)
        {
            cout << num[N] << " ";
        }
    }
}