/*
Problem      : Apply Operations to an Array
Platform     : LeetCode
Problem ID   : 2460

Pattern      : Array Traversal / Simulation
Difficulty   : Easy

Approach:
- Traverse the array from left to right.
- If two adjacent elements are equal:
  - Double the first element.
  - Remove the second element by shifting all remaining
    elements one position to the left.
  - Place 0 at the end of the array.
- After all operations, move all non-zero elements to
  the front while maintaining their relative order.
- Fill the remaining positions with 0.

Time Complexity : O(n²)
Space Complexity: O(1)

Learning:
- Learned how to simulate array operations step by step.
- Practiced shifting elements and moving non-zero values
  while preserving their order.

Mistakes:
- Used assignment operator (=) instead of comparison
  operator (==) in the condition.
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> applyOperations(vector<int>& nums)
    {
        int len = nums.size();

        for(int i = 0;i<len - 1;++i)
        {
            if(nums[i] == nums[i+ 1])
            {
                nums[i] *= 2;
                for(int j = i + 1;j<len - 1;++j)
                {
                    nums[j] = nums[j + 1];
                }

                nums[len - 1] = 0;
            }
        }


        int write = 0;
        for(int i = 0;i<len;++i)
        {
            if(nums[i] != 0)
            {
                nums[write++] = nums[i];
            }
        }

        while(write < len)
        {
            nums[write++] = 0;
        }

        return nums;
    }
};

int main ()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i<n;++i)
    cin >> arr[i];

    Solution point;
    arr =  point.applyOperations(arr);

    for(int i = 0;i<n;++i)
    cout << arr[i] << " " << endl;

    return 0;
    
}