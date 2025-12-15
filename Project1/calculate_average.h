#ifndef CALCULATE_AVERAGE_H
#define CALCULATE_AVERAGE_H

#include <stdexcept>
#include <windows.h>

using namespace std;

template <typename T>
T calculateAverage(T arr[], int size) {
    if (size <= 0) {
        throw invalid_argument("Розмір повинен бути більше нуля.");
    }

    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

#endif 
