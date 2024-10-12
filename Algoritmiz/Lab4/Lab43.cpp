#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, NN = 0;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (num[i] > 0)
        {
            cout << num[i] << " ";
            NN++;
        }
    }
    if (NN == 0)
    {
        cout << "no positive numbers";
    }
}