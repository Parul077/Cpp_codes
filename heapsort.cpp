#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to heapify a subtree rooted at 'rootIndex'
void heapify(vector<int> &arr, int size, int rootIndex) {
    int largest = rootIndex;
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;

    if (leftChild < size && arr[leftChild] > arr[largest])
        largest = leftChild;

    if (rightChild < size && arr[rightChild] > arr[largest])
        largest = rightChild;

    if (largest != rootIndex) {
        swap(arr[rootIndex], arr[largest]);
        heapify(arr, size, largest);
    }
}

// Heap sort function
void heapSort(vector<int> &arr) {
    int size = arr.size();

    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // Extract elements one by one from the heap
    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> numbers(1000);

    // Seed the random number generator
    srand(time(0));

    // Generate random numbers
    for (int i = 0; i < 1000; i++) {
        numbers[i] = rand() % 1000; // Generate numbers between 0 and 999
    }

    cout << "Original numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    heapSort(numbers);

    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
