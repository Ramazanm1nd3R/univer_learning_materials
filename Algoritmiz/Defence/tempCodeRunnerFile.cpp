#include <iostream>
#include <vector>

int main() {
    std::vector<int> array(10);
    std::cout << "Enter 10 numbers into the array: ";
    
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    int max = array[0];
    int maxind = 0;
    
    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            maxind = i;
            max = array[i];
        }
    }
    
    if (maxind > 0) {
        array[maxind - 1] = 0;
    }
    if (maxind < 9) {
        array[maxind + 1] = 0;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << ' ';
    }
}
