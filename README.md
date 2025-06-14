<div align="center">
  <h1>Sorting Algorithms 📊</h1> <img src="https://github.com/deryaxacar/Sorting-Algorithms/blob/main/c.png" alt="http Logo" width="110"></br></br>
   This repository contains implementations of various sorting algorithms written in C.
</div>

---

## Algorithms 🔍

Currently, the repository includes the following sorting algorithms:

1. **Bubble Sort 🧼**  
   - This algorithm compares adjacent elements and swaps them if they are in the wrong order. It repeatedly passes through the list, pushing the largest unsorted element to the end with each pass, until the list is fully sorted.

2. **Insertion Sort 📝**  
   - This algorithm divides the list into a sorted and an unsorted part. Starting from the second element, it inserts each item into its correct position within the sorted portion. The process continues until all elements are sorted.

3. **Selection Sort 🕵️**  
   - This algorithm finds the smallest (or largest) element in the unsorted part of the array and swaps it with the first (or last) unsorted element. This process is repeated until the entire array is sorted.

4. **Merge Sort 🔗**  
   - This algorithm divides the array into two halves, recursively sorts them, and then merges the sorted halves into a single sorted array. It uses a divide-and-conquer approach to efficiently sort the list.

5. **Quick Sort ⚡**  
   - This algorithm selects a pivot element and partitions the array so that elements less than the pivot are on the left, and those greater are on the right. It recursively applies the same process to the subarrays until the entire array is sorted.

---

## Performance Comparison 📈

Use the table below to compare the performance of each algorithm:

| Algorithm       | Best Time Complexity ⏱️ | Average Time Complexity ⏳ | Worst Time Complexity ⏲️ | Extra Memory 🧠 | Stable     |
|----------------|--------------------------|-----------------------------|----------------------------|------------------|-------------|
| Bubble Sort     | O(n)                     | O(n²)                        | O(n²)                      | O(1)             | Yes         |
| Insertion Sort  | O(n)                     | O(n²)                        | O(n²)                      | O(1)             | Yes         |
| Selection Sort  | O(n²)                    | O(n²)                        | O(n²)                      | O(1)             | No          |
| Merge Sort      | O(n log n)               | O(n log n)                   | O(n log n)                 | O(n)             | Yes         |
| Quick Sort      | O(n log n)               | O(n log n)                   | O(n²)                      | O(log n)         | Generally   |

---

## How to Use 🛠️

Each sorting algorithm is implemented in a separate `.c` file. To run an algorithm, compile and execute its file using a C compiler like `gcc`.

Example:

```bash
gcc bubble_sort.c -o bubble_sort
./bubble_sort

```

---

<div align="center">
  <b>2023 | Created by Derya ACAR</b>
</div>
