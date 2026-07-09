/*
Problem      : Build Array from Permutation
Platform     : LeetCode
Problem ID   : 1920

Pattern      : Array Traversal (Index Mapping)
Difficulty   : Easy

Approach:
- Traverse the array.
- For each index i, use nums[i] as an index to access
  another element in the array.
- Store nums[nums[i]] in the result array.
- Return the newly constructed array.

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Learned how to use array values as indices.
- Practiced index mapping to construct a new array.

Mistakes:
- None
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr(len);
        for(int i = 0;i<len;++i)
        arr[i]  = nums[nums[i]];

        return arr;
    }

};  

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.buildArray(nums);

    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}