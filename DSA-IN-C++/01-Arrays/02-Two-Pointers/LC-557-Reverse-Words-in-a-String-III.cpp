/*
Problem: 557 - Reverse Words in a String III
Platform: LeetCode

Topic:
- Strings
- Two Pointers

Pattern:
- In-place Word Reversal

Important:
- Teaches reversing each segment of a string independently using two pointers.

Approach:
- Traverse the string from left to right.
- Track the starting index of each word.
- When a space or the end of the string is reached, identify the word's last index.
- Reverse the word using two pointers.
- Move the starting pointer to the beginning of the next word.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int last = 0;
        int fisrt = 0;

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ' || i == s.size() - 1)
            {
                if(i == s.size() - 1)
                    last = i;
                else
                    last = i - 1;

                while(fisrt < last)
                {
                    swap(s[fisrt], s[last]);
                    fisrt++;
                    last--;
                }

                fisrt = i + 1;
            }
        }

        return s;
    }
};

int main()
{
    string s;
    getline(cin, s);

    Solution obj;

    cout << obj.reverseWords(s) << endl;

    return 0;
}