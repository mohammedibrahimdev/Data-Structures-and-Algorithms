/*
Problem: Check if an Array is Sorted

Platform: N/A
Topic: Arrays
Pattern: Traversal
Difficulty: Easy

Problem Statement:
Given an integer array, determine whether the array is sorted in
non-decreasing order.

Approach:
Traverse the array from left to right and compare each element with
its previous element. If any previous element is greater than the
current element, the array is not sorted. Otherwise, the array is
sorted.

Algorithm:
1. If the array has 0 or 1 element, return true.
2. Traverse the array from index 1 to the last index.
3. Compare each element with its previous element.
4. If arr[i - 1] > arr[i], return false.
5. If the traversal completes, return true.

Time Complexity: O(n)
Space Complexity: O(1)

Edge Cases:
- Empty array
- Single element array
- All elements are equal
- Array with negative numbers
- Reverse sorted array

Key Learning:
A sorted array can be verified efficiently by comparing adjacent
elements in a single traversal.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr)
{
    if (arr.size() <= 1)
        return true;

    for (size_t i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}