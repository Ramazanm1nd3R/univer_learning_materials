#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    cout << "legth or array: ";
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Input arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int gap = n / 2; gap > 0; gap /= 2) {

        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    cout << "Sort arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}