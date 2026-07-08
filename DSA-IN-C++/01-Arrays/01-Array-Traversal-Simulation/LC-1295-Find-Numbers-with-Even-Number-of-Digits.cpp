/*
Problem      : Find Numbers with Even Number of Digits
Platform     : LeetCode
Problem ID   : 1295

Pattern      : Array Traversal

Approach:
- Traverse each element of the array.
- Count the number of digits in each number.
- If the digit count is even, increment the answer.
- Return the total count of numbers having an even number
  of digits.

Time Complexity : O(n × d)
Space Complexity: O(1)

Learning:
- Learned how to count the digits of a number.
- Practiced array traversal and conditional counting.

Mistakes:
- Handle the edge case when the number is 0, since it has
  one digit.
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    int findNumbers(vector<int>& nums)
    {
        int len = nums.size();

        int even = 0;

        for(int i = 0;i<len;++i)
        {
            int number = nums[i];
            int numberlen = 0;
            while(number > 0)
            {
                number = number/10;
                numberlen++;
            }

            if(numberlen%2 == 0) even++;
        }

        return even;
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
    cout << obj.findNumbers(nums) << endl;

    return 0;
}