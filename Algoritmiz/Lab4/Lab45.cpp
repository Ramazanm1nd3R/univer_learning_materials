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
    int max = num[0];
    int maxInd;
    int min = num[0];
    int minInd;
    for (int i = 0; i < N; i++)
    {
        if (min > num[i])
        {
            min = num[i];
            minInd = i;
        }
        if (max < num[i])
        {
            max = num[i];
            maxInd = i;
        }
    }
    int x = num[maxInd];
    num[maxInd] = num[minInd];
    num[minInd] = x;
    for (int i = 0; i < N; i++)
    {
        cout << num[i] << " ";
    }
}