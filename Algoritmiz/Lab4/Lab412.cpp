#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, minX = 0, maxY = 0;
    int minV = 1, maxV = 1;
    cin >> N;
    vector<int> num(N);
    cin >> num[0];
    for (int i = 1; i < N; i++) 
    {
        cin >> num[i];
        if (num[i] < num[minX]) 
        {
            minX = i;
            minV = 1;
        } 
        
        else if (num[i] > num[maxY]) 
        {
            maxY = i;
            maxV = 1;
        } else {
            if (num[i] == num[minX]) 
            {
                minV++;
            }
            if (num[i] == num[maxY]) {
                maxV++;
            }
        }
    }
    
    if (minV > 1) 
    {
        cout << "error";
    }
    else if (maxV > 1)
    {
        cout << "error";
    } 
    else 
    {
        for (int i = 0; i < N; i++) 
        {
            if ((i < max(minX, maxY)) && (i > min(minX, maxY))) 
            {
                cout << "0 ";
            } 
            
            else 
            {
                cout << num[i] << " ";
            }
        }
    }
}