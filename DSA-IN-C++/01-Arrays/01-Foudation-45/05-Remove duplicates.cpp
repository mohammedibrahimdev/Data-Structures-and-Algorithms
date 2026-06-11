// Remove duplicates from sorted array
// Using two pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

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