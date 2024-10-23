# SortArray Project

This project implements a simple **Bubble Sort** algorithm in C++, designed to demonstrate how arrays can be sorted in ascending order with step-by-step output during the sorting process. The project emphasizes modular programming by organizing the sorting function within a custom namespace `SortArrayNS`.

## Features

- **Bubble Sort Algorithm**: Sorts an array of integers using the bubble sort algorithm, which repeatedly compares adjacent elements and swaps them if necessary.
- **Namespace Encapsulation**: The sorting logic is encapsulated within the `SortArrayNS` namespace, promoting better code structure and avoiding conflicts.
- **Step-by-step Visualization**: The program outputs the intermediate state of the array after every comparison and swap, allowing the user to follow the sorting process closely.

## Project Structure

- `main.cpp`: Contains the main function that initializes the array and invokes the `bubbleSort` function from the `SortArrayNS` namespace.
- `SortArray.cpp`: Implements the `bubbleSort` function, which sorts the array and provides output after each step.
- `SortArray.hpp`: Header file declaring the `bubbleSort` function and defining the `SortArrayNS` namespace.

## Usage

### Prerequisites

To run this project, you need a C++ compiler such as `g++`.

### Compiling and Running the Program

1. **Clone the repository**:
   ```bash
   git clone <repository-url>

Navigate to the project directory:
cd SortArray


Compile the program:
g++ -o SortArray main.cpp SortArray.cpp


Run the program:
./SortArray


