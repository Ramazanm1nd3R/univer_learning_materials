#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    cin >> M;
    for (int i = 0; i < N; i++)
    {
        if (num[i] > M)
        {
            cout << num[i] << " ";
        }
    }
}