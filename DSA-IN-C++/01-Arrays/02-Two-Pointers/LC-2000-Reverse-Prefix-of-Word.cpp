/*
Problem      : Reverse Prefix of Word
Platform     : LeetCode
Problem ID   : 200

Pattern      : Two Pointers (Opposite Direction)
Difficulty   : Easy

Approach:
- First find the position of the given character `ch`.
- Use two pointers:
    i → starts from the beginning
    j → starts at the position of `ch`
- Swap the characters at i and j.
- Move i forward and j backward.
- Continue until the pointers meet.
- This reverses only the prefix ending at `ch`.

Example:
word = "abcdef", ch = 'd'

Before:
a b c d e f
↑     ↑
i     j

After reversing:
d c b a e f

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to find a required position and then
  reverse a part of a string using Two Pointers.
- Learned that two pointers moving towards each other
  can reverse a range in-place.

Mistakes:
- None
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        if (word.find(ch) != string::npos)
        {
            int j = 0;
            int i = 0;

            while (word[j] != ch)
                j++;

            while (i < j)
            {
                swap(word[i], word[j]);
                i++;
                j--;
            }
        }

        return word;
    }
};

int main()
{
    string word;
    char ch;

    cin >> word >> ch;

    Solution obj;

    cout << obj.reversePrefix(word, ch) << endl;

    return 0;
}