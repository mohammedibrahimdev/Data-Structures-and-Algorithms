/*
Problem      : Max Consecutive Ones
Platform     : LeetCode
Problem ID   : 485

Pattern      : Array Traversal (Counting)
Difficulty   : Easy

Approach:
- Traverse the array from left to right.
- Count consecutive 1s.
- Whenever a 0 is encountered, update the maximum count
  and reset the current count.
- After traversal, return the maximum consecutive count.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to count consecutive occurrences during a
  single traversal.
- Practiced maintaining a running count and maximum value.

Mistakes:
- None
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int len = nums.size();
        int first = 0, secound = 0;

        for(int i = 0;i<len;++i)
        {
            if(nums[i] == 1)first++;
            else 
            {
                secound = max(first , secound);
                first = 0;
            }
        }

        return max(first , secound);
    }
};

int main ()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0;i<n;++i)
    cin >> nums[i];

    Solution point;

    cout << point.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}