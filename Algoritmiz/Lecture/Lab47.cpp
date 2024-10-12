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
    for (int i = 0; i < N/2; i++)
    {
        cout << num[i] << " " << num[N - i - 1] << " ";
    }
    if (N % 2 != 0)
    {
        cout << num[N/2];
    }
}