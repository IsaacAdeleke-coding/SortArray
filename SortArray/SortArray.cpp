//
//  SortArray.cpp
//  SortArray
//
//  Created by Isaac Adeleke on 10/23/24.
//

// SortArray.cpp
#include "SortArray.hpp"
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
