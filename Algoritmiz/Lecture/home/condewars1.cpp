#include <vector>

int array_plus_array(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    int sum = 0;

    for (int num : arr1) {
        sum += num;
    }

    for (int num : arr2) {
        sum += num;
    }

    return sum;
}