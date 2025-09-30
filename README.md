# Searching-Algorithms.cpp

# Aim:

To study and implement different searching algorithms (Linear, Sequential, and Binary Search) in C++ and analyze their efficiency.

# Apparatus:

A computer system with any C++ compiler.

# Theory:

# a) Linear Search:

• Linear Search is the simplest searching algorithm.

• It checks each element in the array sequentially until the desired element is found or the list ends.

• Time Complexity: O(n)

Best case: Element found at the beginning.

Worst case: Element not found or found at the end.

# b) Sequential Search:

•Sequential Search is basically the same as Linear Search (element-by-element comparison).

•Sometimes "sequential" refers to searching in an ordered list where the search may stop early if the element is smaller/larger than the target.

Time Complexity: O(n)

# c) Binary Search:

• Binary Search works on sorted arrays only.

• The search interval is repeatedly divided into two halves.

• Compare the target with the middle element:

If equal → element found.

If smaller → search left half.

If larger → search right half.


Time Complexity: O(log n)

Best case: Middle element is the target.

Worst case: Element not found after log₂(n) iterations.

# Algorithm:

⚡1. Linear Search Algorithm

Step 1: Start
Step 2: Input array of size n and the element key to search
Step 3: Set index i = 0
Step 4: Repeat until i < n
    • If arr[i] == key, then return i (element found)
    • Else increment i = i + 1
Step 5: If loop ends, element not found → return -1
Step 6: Stop

⚡2. Sequential Search Algorithm

(Same as linear, sometimes used for ordered lists)

Step 1: Start
Step 2: Input array of size n (optionally sorted) and element key
Step 3: For each index i from 0 to n-1
    • If arr[i] == key, return i (element found)
    • If array is sorted and arr[i] > key, stop search (element not present)
Step 4: If loop completes, return -1
Step 5: Stop

⚡3. Binary Search Algorithm

Step 1: Start
Step 2: Input sorted array of size n and element key
Step 3: Initialize low = 0, high = n - 1
Step 4: Repeat while low <= high
    • Compute mid = (low + high) / 2
    • If arr[mid] == key → return mid (element found)
    • Else if arr[mid] < key → set low = mid + 1
    • Else → set high = mid - 1
Step 5: If loop ends, return -1 (element not found)
Step 6: Stop

# Conclusion:
Linear/Sequential Search is simple but inefficient for large datasets.

Binary Search is much faster but requires the data to be sorted.

Choice of algorithm depends on the dataset size and whether it is sorted.
