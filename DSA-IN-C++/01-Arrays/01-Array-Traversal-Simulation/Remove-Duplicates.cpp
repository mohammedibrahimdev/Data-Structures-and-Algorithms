/*
Problem: Remove Duplicates from Sorted Array
Platform: N/A
Topic: Arrays
Pattern: Two Pointers
Difficulty: Easy

Approach:
Use two pointers to overwrite duplicate elements in-place.
The first pointer tracks the last unique element, while the
second pointer scans the array for new unique values.

Algorithm:
1. Initialize i = 0.
2. Traverse the array using j from index 1.
3. If arr[j] != arr[i], increment i and copy arr[j] to arr[i].
4. The first (i + 1) elements contain all unique values.

Time: O(n)
Space: O(1)

Key Learning:
Two pointers can process a sorted array in-place without
using extra memory.
*/

#include<iostream>
#include<vector>
using namespace std;

void removeDuplicates(vector<int>& arr)
{
    if(arr.empty()) return;

    int i = 0;

    for(int j = 1; j < arr.size(); ++j)
    {
        if(arr[j] != arr[i])
        {
            arr[++i] = arr[j];
        }
    }

    for(int k = 0; k <= i; ++k)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    removeDuplicates(arr);

    return 0;
}