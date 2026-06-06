# Two Pointers & Sliding Window

## Overview

Two Pointers and Sliding Window are problem-solving techniques used to optimize brute-force solutions, often reducing time complexity from O(n²) to O(n).

These techniques are commonly used with:
- Arrays
- Strings
- Sorted data

---

## Two Pointers

### Idea
Use two indices (pointers) to traverse data efficiently.

### Common Uses
- Sorted array problems
- Pair sum problems
- Removing duplicates
- Merging arrays
- Partitioning

### Examples
- Two Sum II
- Container With Most Water
- Remove Duplicates from Sorted Array
- Valid Palindrome

---

## Sliding Window

### Idea
Maintain a window (subarray or substring) and expand/shrink it as needed.

### Common Uses
- Fixed-size subarrays
- Variable-size subarrays
- Substring problems
- Maximum/minimum window problems

### Examples
- Maximum Sum Subarray of Size K
- Longest Substring Without Repeating Characters
- Minimum Window Substring
- Permutation in String

---

## Time Complexity Benefits

Typical Optimization:

- Brute Force: O(n²)
- Two Pointers: O(n)
- Sliding Window: O(n)

---

## Problem Recognition

Consider Two Pointers when:
- Array is sorted
- Looking for pairs
- Comparing from both ends

Consider Sliding Window when:
- Working with contiguous elements
- Need longest/shortest subarray or substring
- Need fixed-size range processing

---

## Key Goal

Learn to recognize patterns where repeated work can be avoided by moving pointers instead of recomputing results.