/*
Problem      : Remove Element
Platform     : LeetCode
Problem ID   : 27

Pattern      : Two Pointers (Fast & Slow)

Approach:
- Traverse the array using a fast pointer.
- If the current element is not equal to val:
  - Copy it to the slow pointer position.
  - Move the slow pointer forward.
- Ignore elements equal to val.
- Return the slow pointer as the new length.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to remove elements in-place.
- Practiced the Fast & Slow Two Pointers pattern.

Mistakes:
- None
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int RemoveElement(vector<int>& nums, int val)
    {
        int j = 0;
        int count = 0;

        for(int &number : nums)
        {
            if(number == val) continue;
            else
            {
                count++;
                nums[j++] = number;
            }
        }

        return count;
    }
};

int main ()
{
    int len;
    cin >> len;

    vector<int> nums(len);
    for(int  i = 0;i<len;++i)
    cin >> nums[i];

    int removeElement;
    cin >> removeElement;

    Solution point;
    cout << point.RemoveElement(nums, removeElement) << endl;

    return 0;
}