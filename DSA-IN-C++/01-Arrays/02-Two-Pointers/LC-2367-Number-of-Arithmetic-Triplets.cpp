/*
Problem      : Number of Arithmetic Triplets
Platform     : LeetCode
Problem ID   : 2367

Pattern      : Brute Force / Nested Loops
Difficulty   : Easy

Algorithm:
- Choose three numbers in increasing index order.
- Check whether:
      nums[j] - nums[i] == diff
      nums[k] - nums[j] == diff
- If both conditions are true, count the triplet.

Main Idea:
Find 3 numbers with the same difference.

Time Complexity : O(n³)
Space Complexity: O(1)

Learning:
- Learned how nested loops can be used to check triplets.
- Learned to identify the required relationship between
  the three numbers.

Mistakes:
- None
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int len = nums.size();
        int  count = 0;
        for(int i = 0;i<len;++i)
        {
            for(int j = i + 1;j<len;++j)
            {
                if((nums[j] - nums[i]) == diff)
                {
                    int target = nums[j] + diff;

                    for(int k = j + 1;k<len;++k){
                        if(target == nums[k])
                        count++;
                    }
                }
            }
        }

        return count;
    }
};


int main()
{
    int n, diff;

    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cin >> diff;

    Solution obj;

    cout << obj.arithmeticTriplets(nums, diff) << endl;

    return 0;
}