/*
Problem: Check Sorted or Not

Pattern: Traversal

Approach:
- Traverse the array from left to right.
- Compare each element with its previous element.
- If arr[i - 1] > arr[i], the array is not sorted.
- Otherwise, the array is sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int>& arr, int n)
{
    if(n <= 1) return true;

    for(int i = 1; i < n; i++)
    {
        if(arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(isSorted(arr, n))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}