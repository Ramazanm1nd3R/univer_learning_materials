#include <iostream>
#include <vector>
using namespace std;
int main()
{
    double N, avg, sum = 0;
    cin >> N;
    vector<float> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    avg = sum / N;
    cout << sum << endl << avg;
}