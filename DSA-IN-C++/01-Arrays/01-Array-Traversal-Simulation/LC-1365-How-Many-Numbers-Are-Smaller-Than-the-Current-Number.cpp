/*
Problem      : How Many Numbers Are Smaller Than the Current Number
Platform     : LeetCode
Problem ID   : 1365

Pattern      : Brute Force / Nested Loops
Difficulty   : Easy

Approach:
- Traverse each element in the array.
- Compare it with every other element.
- Count how many elements are smaller than the current element.
- Store the count in the answer array.
- Return the answer array.

Time Complexity : O(n²)
Space Complexity: O(n)

Mistakes:
- None
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> smallerNumbersThanCurrent(vector<int> nums)
    {
        int len = nums.size();

        vector<int> arr(len);

        for(int i = 0;i<len;++i)
        {
            int count = 0;
            for(int j = 0;j<len;++j)
            {
                if(nums[i] > nums[j] && j != i)
                count++;
            }

            arr[i] += count;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; ++i)
        cin >> nums[i];

    Solution obj;

    vector<int> ans = obj.smallerNumbersThanCurrent(nums);

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}