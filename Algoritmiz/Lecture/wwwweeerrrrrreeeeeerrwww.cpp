#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, x = 0;
    cin >> N;
    vector<int> num(N);
    for (int i = 0 ;i < N ;i++)
    {
        cin >> num[i];
    }
    for (int i = 0 ;i < N ;i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (num [i] > num[i + 1])
            {
                num[i + 1] = x;
                num[i] = num[i + 1];
                x = num[i];
            }
        }
    }
    for (int i = 0;i < N; i++)
    {
        cout << num[i] << " ";
    }
}