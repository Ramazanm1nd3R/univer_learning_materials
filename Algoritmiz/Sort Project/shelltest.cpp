#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

// Реализация Shell Sort
template <typename RandomAccessIterator>
void shellSort(RandomAccessIterator first, RandomAccessIterator last) {
    int n = std::distance(first, last);
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            auto temp = *(first + i);
            int j;
            for (j = i; j >= gap && *(first + j - gap) > temp; j -= gap) {
                *(first + j) = *(first + j - gap);
            }
            *(first + j) = temp;
        }
    }
}

int main() {
    int dataSize = 1000000; // Размер массива данных
    std::vector<int> data;

    // Генерация случайных данных
    for (int i = 0; i < dataSize; ++i) {
        data.push_back(rand());
    }

    // Клонируйте данные для каждого алгоритма сортировки
    std::vector<int> dataShell = data;
    std::vector<int> dataQuick = data;
    std::vector<int> dataMerge = data;

    // Измерение времени выполнения сортировки Shell Sort
    auto startTimeShell = std::chrono::high_resolution_clock::now();
    shellSort(dataShell.begin(), dataShell.end());
    auto endTimeShell = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationShell = endTimeShell - startTimeShell;
    double timeShellSort = durationShell.count(); // Время выполнения в секундах

    // Измерение времени выполнения сортировки QuickSort
    auto startTimeQuick = std::chrono::high_resolution_clock::now();
    std::sort(dataQuick.begin(), dataQuick.end());
    auto endTimeQuick = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationQuick = endTimeQuick - startTimeQuick;
    double timeQuickSort = durationQuick.count(); // Время выполнения в секундах

    // Измерение времени выполнения сортировки MergeSort
    auto startTimeMerge = std::chrono::high_resolution_clock::now();
    std::stable_sort(dataMerge.begin(), dataMerge.end());
    auto endTimeMerge = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durationMerge = endTimeMerge - startTimeMerge;
    double timeMergeSort = durationMerge.count(); // Время выполнения в секундах

    std::cout << "Shell Sort time: " << timeShellSort << " seconds" << std::endl;
    std::cout << "Quick Sort time: " << timeQuickSort << " seconds" << std::endl;
    std::cout << "Merge Sort time: " << timeMergeSort << " seconds" << std::endl;

    return 0;
}
