/*
Problem      : Move Zeroes
Platform     : LeetCode
Problem ID   : 283

Pattern      : Two Pointers (Fast & Slow)

Approach:
- Traverse the array using the fast pointer.
- Whenever a non-zero element is found:
  - Swap it with the element at the slow pointer.
  - Move the slow pointer forward.
- After traversal, all non-zero elements remain in their
  original order and all zeroes are moved to the end.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to move elements in-place while preserving
  their relative order.
- Practiced the Fast & Slow Two Pointers pattern.

Mistakes:
- None
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j++]);
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;
    obj.moveZeroes(nums);

    cout << "After moving zeroes: ";

    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
} 