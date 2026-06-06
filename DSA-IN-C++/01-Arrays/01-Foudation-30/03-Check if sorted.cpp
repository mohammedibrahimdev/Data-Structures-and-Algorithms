// Problem: Check Sorted or not
// Pattern: Traversal
// Time Complexity: O(n)
// Space Complexity: O(1)

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