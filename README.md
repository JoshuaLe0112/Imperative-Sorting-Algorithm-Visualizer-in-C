# Imperative Sorting Algorithm Visualizer

A simple **C program** that demonstrates how different sorting algorithms work through step-by-step output in the terminal.

The program implements **Bubble Sort, Selection Sort, and Insertion Sort** and displays the array after each major step of the sorting process.

## Sorting Algorithms

### Bubble Sort

Compares adjacent elements and swaps them when they are in the wrong order. Larger elements gradually move toward the end of the array after each pass.

### Selection Sort

Searches for the smallest element in the unsorted portion of the array and swaps it with the first unsorted element.

### Insertion Sort

Builds the sorted portion of the array one element at a time by moving larger elements and inserting each element into its correct position.

## Features

* Implements three fundamental sorting algorithms
* Displays the sorting process directly in the terminal
* Shows the array after each step/pass
* Written in C
* Uses arrays and basic control structures
* Demonstrates the differences between sorting algorithms

## Technologies

* **C**
* **Make**

## How to Run

Clone the repository:

```bash
git clone git@github.com:YOUR_USERNAME/YOUR_REPOSITORY.git
```

Navigate to the project:

```bash
cd YOUR_REPOSITORY
```

Compile the program:

```bash
make
```

Run the program:

```bash
./sorting_visualizer
```

## Example Output

```text
Original Array:
64 25 12 22 11

Bubble Sort:
25 12 22 11 64
12 22 11 25 64
12 11 22 25 64
11 12 22 25 64

Sorted Array:
11 12 22 25 64
```

## Algorithm Complexity

| Algorithm      | Best Case | Average Case | Worst Case | Space |
| -------------- | --------: | -----------: | ---------: | ----: |
| Bubble Sort    |      O(n) |        O(n²) |      O(n²) |  O(1) |
| Selection Sort |     O(n²) |        O(n²) |      O(n²) |  O(1) |
| Insertion Sort |      O(n) |        O(n²) |      O(n²) |  O(1) |

## Purpose

This project is designed to practice **imperative programming in C** and develop a better understanding of sorting algorithms, arrays, loops, comparisons, swaps, and algorithm complexity.

## Future Improvements

* Add more sorting algorithms
* Allow users to enter their own arrays
* Add randomized array generation
* Track the number of comparisons and swaps
* Add adjustable output speed
