/*
Problem      : Running Sum of 1D Array
Platform     : LeetCode
Problem ID   : 1480

Pattern      : Prefix Sum (Brute Force)
Difficulty   : Easy

Approach:
- Traverse the array.
- For each index, calculate the sum of all elements from
  index 0 to the current index.
- Store the computed sum in a new array.
- Return the resulting array.

Time Complexity : O(n²)
Space Complexity: O(n)

Learning:
- Learned how running sums are computed.
- Understood the brute-force approach before learning the
  optimal Prefix Sum technique.
s
Mistakes:
- Used a nested loop, resulting in O(n²) time.
- This problem can be optimized to O(n) using Prefix Sum.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len  = nums.size();
        vector<int> arr(len);
        int i = 0, j = 0, sum = 0;

        for(int i = 0;i<len;++i)
        {
            sum = 0;
            for(int j = 0;j<=i;++j)
            {
                sum += nums[j];
            }

            arr[i] = sum;
        }

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
    vector<int> ans = obj.runningSum(nums);

    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}