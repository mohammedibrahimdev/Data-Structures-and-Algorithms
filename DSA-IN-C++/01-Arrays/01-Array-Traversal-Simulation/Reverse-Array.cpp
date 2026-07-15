/*
Problem: Reverse an Array
Platform: N/A
Topic: Arrays
Pattern: Two Pointers
Difficulty: Easy

Approach:
Use two pointers, one starting at the beginning of the array
and the other at the end. Swap the elements at both pointers,
then move the pointers towards each other until they meet.

Algorithm:
1. Initialize left = 0 and right = n - 1.
2. Swap arr[left] and arr[right].
3. Increment left and decrement right.
4. Repeat until left >= right.

Time: O(n)
Space: O(1)

Key Learning:
Two pointers allow an array to be reversed in-place without
using any extra memory.
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    reverseArray(arr);
    printArray(arr);

    return 0;
}