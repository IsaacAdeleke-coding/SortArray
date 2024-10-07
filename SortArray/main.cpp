//
//  main.cpp
//  SortArray
//
//  Created by Isaac Adeleke on 10/7/24.
//

#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    // Loop through the entire array
    for (int i = 0; i < size - 1; i++) {
        // Inner loop to perform swapping if needed
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Output the current state of the array after each comparison/swap
            cout << "Step " << i + 1 << ", swap " << j + 1 << ": ";
            for (int k = 0; k < size; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {8, 2, 4, 1, 3};  // Array to be sorted

    // Call the bubbleSort function
    cout << "Initial array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, SIZE);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
