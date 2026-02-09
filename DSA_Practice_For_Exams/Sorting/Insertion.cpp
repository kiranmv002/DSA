"""Insertion Sort Algorithm

Insertion Sort is a simple sorting technique.
It works by taking one element at a time and placing it
in its correct position in the sorted part of the list.

Example:
Array: [7, 4, 6, 2]

Step 1:
Sorted part: [7]

Step 2:
Insert 4 → [4, 7]

Step 3:
Insert 6 → [4, 6, 7]

Step 4:
Insert 2 → [2, 4, 6, 7]

Sorted Array:
[2, 4, 6, 7]
"""
Pseudo Code:
InsertionSort(arr):
    for i from 1 to n-1:
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key

Time Complexity:
Best Case: O(n)
Worst Case: O(n²)

Insertion Sort is efficient for small datasets
and nearly sorted arrays.
