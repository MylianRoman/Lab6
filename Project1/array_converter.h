#ifndef ARRAY_CONVERTER_H
#define ARRAY_CONVERTER_H

#include <iostream>
#include <stdexcept>
#include <windows.h>

using namespace std;

template <typename T>
class ArrayConverter {
public:
    ArrayConverter(T* inputArray, int size) : size(size) {
        if (size <= 0) {
            throw std::invalid_argument("Size must be greater than zero.");
        }

        // Ініціалізуємо масив символів
        charArray = new char[size];
        for (int i = 0; i < size; ++i) {
            charArray[i] = static_cast<char>(inputArray[i]);
        }
    }

    ~ArrayConverter() {
        delete[] charArray; // Звільнення пам'яті
    }

    void printCharArray() const {
        std::cout << "Перетворений масив char (значення): ";
        for (int i = 0; i < size; ++i) {
            std::cout << static_cast<int>(charArray[i]) << " "; // Виводимо числові значення символів
        }
        std::cout << std::endl;
    }

private:
    char* charArray; // Динамічний масив для символів
    int size;        // Розмір масиву
};

#endif // ARRAY_CONVERTER_H
