/*
Problem      : Binary Search
Platform     : Self Practice
Topic        : Searching
Pattern      : Binary Search (Iterative)

Approach:
- Initialize left = 0 and right = n - 1.
- Calculate the middle index using left + (right - left) / 2.
- If arr[mid] equals the target, return the index.
- If arr[mid] is smaller, search the right half.
- Otherwise, search the left half.
- Stop when the element is found or left > right.

Time Complexity : O(log n)
Space Complexity: O(1)

Importance:
- Searches sorted arrays in O(log n) time by eliminating half
  of the search space in each iteration.
- Uses the divide-and-conquer approach and is the foundation
  for advanced binary search problems.

*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 20;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Element not found";
    return 0;
}