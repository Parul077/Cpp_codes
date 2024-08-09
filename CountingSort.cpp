#include <iostream>
#include <ctime>
#include <cstdlib>

void countingSort(int arr[], int size) {
    const int range = 10; // Numbers are between 0 and 9
    int count[range] = {0};

    // Count the occurrences of each number
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }

    // Update the count array to store the correct position of each number
    for (int i = 1; i < range; ++i) {
        count[i] += count[i - 1];
    }

    // Build the sorted array
    int sortedArray[size];
    for (int i = size - 1; i >= 0; --i) {
        sortedArray[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = sortedArray[i];
    }
}

int main() {
    const int size = 1000;
    int arr[size];

    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate random numbers between 0 and 9
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 10;
    }

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    countingSort(arr, size);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
