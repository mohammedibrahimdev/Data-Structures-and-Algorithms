/*
Problem      : Number of Good Pairs
Platform     : LeetCode
Problem ID   : 1512

Pattern      : Brute Force / Nested Loops
Difficulty   : Easy

Approach:
- Traverse the array using two nested loops.
- Compare each element with the remaining elements.
- If two elements are equal, count it as a good pair.
- Return the total number of good pairs.

Time Complexity : O(n²)
Space Complexity: O(1)
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    int numIdenticalPairs(vector<int> nums)
    {
        int len = nums.size();
        int count = 0;

        for(int i = 0;i<len - 1;++i)
        {
            for(int j = 0;j<len;++j)
            {
                if(nums[i] == nums[j] && i <j)
                count++;
            }
        }

        return count;
    }
};

int main ()
{
    int n;
    cin >> n;           // Enter no.of numbers

    vector<int> arr(n);
    for(int i =0;i<n;++i)
    cin >> arr[i];

    Solution point;

    cout << point.numIdenticalPairs(arr) << endl;
    
    return 0;

}
