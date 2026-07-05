/*
Problem: Largest Element in an Array
Platform: Self Practice
Topic: Arrays
Pattern: Traversal
Difficulty: Easy

Problem Statement:
Given an integer array, return the largest element.

Approach:
Initialize the first element as the maximum and traverse the array once,
updating the maximum whenever a larger element is found.

Algorithm:
1. Initialize the first element as the maximum.
2. Traverse the remaining elements.
3. Update the maximum if needed.
4. Return the maximum.

Time Complexity: O(n)
Space Complexity: O(1)

Edge Cases:
- Empty array
- Single element
- All elements equal
- Negative numbers

Key Learning:
A single traversal is enough to find the maximum element.
*/

#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int>& array) {
    if (array.empty()) return -1;

    int largest = array[0];

    for (size_t i = 1; i < array.size(); ++i) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << findLargest(array);

    return 0;
}