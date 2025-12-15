#include <iostream>
#include "calculate_average.h"
#include "array_converter.h"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int size;

    cout << "Enter the number of elements in the array for the arithmetic mean: ";
    cin >> size;

    if (size <= 0) {
        cerr << "The size of the array must be greater than zero." << endl;
        return 1;
    }

    double* arr = new double[size];

    cout << "Enter " << size << " array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Arithmetic mean: " << calculateAverage(arr, size) << endl;

    delete[] arr;

    const int intSize = 5;
    int intArray[intSize];

    cout << "Enter " << intSize << " elements of an int array:" << endl;
    for (int i = 0; i < intSize; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> intArray[i];
    }

    try {
        ArrayConverter<int> converter(intArray, intSize);
        converter.printCharArray(); 
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
