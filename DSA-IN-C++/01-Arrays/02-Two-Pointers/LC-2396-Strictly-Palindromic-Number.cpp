/*
Problem      : Strictly Palindromic Number
Platform     : LeetCode
Problem ID   : 2396

Pattern      : Simulation + Two Pointers
Difficulty   : Medium

Approach:
- Try every base from 2 to n - 2.
- Convert n into that base using repeated division.
- Store the digits in a string.
- Use two pointers to check whether the number is a palindrome.
- If any base is not a palindrome, return false.
- If all bases are palindromic, return true.

Main Idea:
Convert → Check Palindrome → Repeat for every base.

Base Conversion:
- remainder = number % base
- number = number / base
- Repeat until number becomes 0.

Palindrome Check:
- first pointer starts from the beginning.
- last pointer starts from the end.
- Compare both and move toward the center.

Time Complexity : O(n log n)
Space Complexity: O(log n)

Learning:
- Learned how to convert a number into different bases.
- Practiced combining number conversion with the
  Two Pointer palindrome technique.

Mistakes:
- None
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {

        for (int i = 2; i <= n - 2; ++i)
        {
            string base_number;
            int copy = n;

            // Convert n into base i
            while (copy > 0)
            {
                int remainder = copy % i;
                base_number += char('0' + remainder);
                copy /= i;
            }

            // Check palindrome using two pointers
            int first = 0;
            int last = base_number.size() - 1;

            while (first < last)
            {
                if (base_number[first] != base_number[last])
                    return false;

                first++;
                last--;
            }
        }

        return true;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution point;

    cout << point.isStrictlyPalindromic(n) << endl;

    return 0;
}