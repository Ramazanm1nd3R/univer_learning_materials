#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K, L, sum = 0;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    cin >> K >> L;
    for (int i = 0;i < N; i++)
    {
        if (i < K || L < i)
        {
            sum += num[i];
        }
    }
    cout << sum;
}