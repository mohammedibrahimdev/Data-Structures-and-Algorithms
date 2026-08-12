/*
Problem      : Reverse Only Letters
Platform     : LeetCode
Problem ID   : 917

Pattern      : Two Pointers
Difficulty   : Easy

Algorithm:
- Keep one pointer at the beginning and one at the end.
- If both positions contain letters, swap them.
- If the left position is not a letter, move left forward.
- If the right position is not a letter, move right backward.
- Continue until the pointers meet.

Main Idea:
Find letters from both ends → swap them → skip non-letters.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to reverse only selected characters while
  keeping other characters in their original positions.
- Practiced Two Pointers with conditions.

Mistakes:
- None
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {

        int last = s.size() - 1;
        int first = 0;

        while(first < last)
        {  
            if(isalpha(s[first]) && isalpha(s[last]))
            {
                swap(s[first], s[last]);

                first++;
                last--;
            }

            if(!isalpha(s[first]))
                first++;

            if(!isalpha(s[last]))
                last--;
        }

        return s;
    }
};

int main()
{
    string s;

    cin >> s;

    Solution obj;

    cout << obj.reverseOnlyLetters(s) << endl;

    return 0;
}
