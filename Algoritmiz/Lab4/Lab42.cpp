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
    int min = num[0];
    for (int i = 0; i < N; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    cout << min << endl << max;
}