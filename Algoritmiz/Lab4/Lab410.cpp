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
        if (i != 0)
        {
            if ((num[i-1] > num[i]) && (num[i+1] > num[i]))
            {
                cout << num[i] << " ";
            }
        }
    }
}