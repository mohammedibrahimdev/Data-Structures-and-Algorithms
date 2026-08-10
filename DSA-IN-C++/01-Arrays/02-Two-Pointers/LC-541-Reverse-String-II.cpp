/*
Problem      : Reverse String II
Platform     : LeetCode
Problem ID   : 541

Pattern      : Two Pointers + String Traversal
Difficulty   : Easy

Algorithm:
- Divide the string into blocks of size 2k.
- In every block, reverse only the first k characters.
- Leave the next k characters unchanged.
- If fewer than k characters remain, reverse all of them.
- Use two pointers to reverse each required section.

Example:
s = "abcdefg", k = 2

Blocks:
ab | cd | ef | g

Reverse first 2 characters of each 2k block:

ba | cd | fe | g

-
2k block
┌───────────────┐
│ reverse k │ skip k │
└───────────────┘
      ↓
   repeat
-
Answer:
"bacdfeg"

Main Idea:
Process 2k characters → reverse first k → skip next k.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to process a string in fixed-size blocks.
- Learned how Two Pointers can reverse only a selected
  part of each block.

Mistakes:
- None
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {

            int first = i;
            int last = min(i + k - 1, (int)s.size() - 1);

            while (first < last) {
                swap(s[first], s[last]);
                first++;
                last--;
            }
        }

        return s;
    }
};

int main()
{
    string s;
    int k;

    cin >> s;
    cin >> k;

    Solution obj;

    cout << obj.reverseStr(s, k) << endl;

    return 0;
}
