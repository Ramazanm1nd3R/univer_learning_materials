#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> num(N);
    int startVal = 0;
    int endVal = 0;
    bool between = false;
    int sum = 0;
    int zeroCount = 0; 

    for (int i = 0; i < N; i++) 
    {
        cin >> num[i];
        if (num[i] == 0) 
        {
            zeroCount++;
        }
    }

    if (zeroCount != 2) 
    {
        cout << "error";
        return 1;
    }

    for (int i = 0; i < N; i++) 
    {
        if (num[i] == startVal) 
        {
            between = true;
        } 
        
        else if (num[i] == endVal) 
        {
            between = false;
        } 
        
        else if (between) 
        {
            sum += num[i];
        }
    }

    cout << sum;
}
