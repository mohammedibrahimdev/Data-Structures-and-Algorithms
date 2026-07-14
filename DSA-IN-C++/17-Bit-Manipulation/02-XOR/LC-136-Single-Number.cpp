/*
Problem      : Single Number
Platform     : LeetCode
Problem ID   : 136

Pattern      : Bit Manipulation (XOR)
Difficulty   : Easy

Approach:
- Initialize the answer as 0.
- Traverse the array and XOR each element with the answer.
- Since a number XOR itself is 0 and XOR with 0 gives the
  same number, all duplicate elements cancel out.
- The remaining value is the element that appears only once.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to use the XOR operation to eliminate
  duplicate elements.
- Practiced solving problems using Bit Manipulation.

Mistakes:
- None
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int num : nums)
        ans ^= num;

        return ans;
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

    cout << point.singleNumber(nums) << endl; 

    return 0;
}