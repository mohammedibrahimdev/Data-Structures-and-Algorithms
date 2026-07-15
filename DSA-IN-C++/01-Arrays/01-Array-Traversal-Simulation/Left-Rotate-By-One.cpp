/*
Problem: Left Rotate an Array by One Place
Platform: N/A
Topic: Arrays
Pattern: Traversal
Difficulty: Easy

Approach:
Store the first element, shift all remaining elements one position
to the left, then place the stored element at the last index.

Algorithm:
1. Store first element.
2. Shift elements left.
3. Place stored element at the end.

Time: O(n)
Space: O(1)

Key Learning:
In-place array rotation can be achieved using a temporary variable.
*/
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    
    for(int i = 0;i<n;++i)
    cin >> arr[i];

    int firstnum = arr[0];
    for(int i = 0;i<n - 1;++i)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstnum;

    for(int i =0;i<n;++i)
    cout << arr[i] << "   ";
    
    return 0;
}