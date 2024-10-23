//
//  main.cpp
//  SortArray
//
//  Created by Isaac Adeleke on 10/7/24.
//

// main.cpp
#include "SortArray.hpp"
#include <iostream>
using namespace std;

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
