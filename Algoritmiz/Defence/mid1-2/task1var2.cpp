#include <iostream>
int main(){
    const int size = 6;
    int arr[size];
    int maxsum = 0, sum = 0;
    for (int i = 0; i < size; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            sum++;
        }
        else{
            if (maxsum < sum){
                maxsum = sum;
            }
            sum = 0;
        }
    }
    if (sum > maxsum){
        maxsum = sum;
    }
    std::cout << maxsum;
}

// Greate an array of 10 elements and enter it values
// You need to find the longest continuous series of zeros in a given array (a series of zeros is several zeros continuously located nearby.)
// (important note: there can be several series in the array, you need to find the longest one)
// Print the number of zeros in the longest series