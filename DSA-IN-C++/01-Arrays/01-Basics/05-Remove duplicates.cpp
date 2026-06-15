/*
Problem: Remove duplicates from a sorted array.

Pattern: Two Pointers

Approach:
- Maintain two pointers:
  - i tracks the position of the last unique element.
  - j traverses the array.
- If arr[j] is different from arr[i]:
  - Move i forward.
  - Place arr[j] at position i.
- After traversal, elements from index 0 to i
  contain all unique values.
- Print the unique elements.

Time Complexity: O(n)
Space Complexity: O(1)
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