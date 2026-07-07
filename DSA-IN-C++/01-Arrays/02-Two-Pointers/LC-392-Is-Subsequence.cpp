/*
Problem      : Is Subsequence
Platform     : LeetCode
Problem ID   : 392

Pattern      : Two Pointers (Same Direction)

Approach:
- Traverse the target string using one pointer.
- Traverse the subsequence string using another pointer.
- If both characters match, move both pointers.
- Otherwise, move only the pointer of the target string.
- If the subsequence pointer reaches the end, the string is a
  valid subsequence.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to check whether one string is a subsequence
  of another using two pointers.
- Practiced the Same Direction Two Pointers pattern.

Mistakes:
- None
*/
#include<iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int lens = s.size();
        int lent = t.size();
        if(lens == 0) return true;
        if(lens > lent) return false;

        int i = 0, j = 0;
        while(i < lent)
        {
            if(t[i] == s[j])
            {
                i++, j++;
            }
            else  i++;

            if(j == lens) return true;
        }

        return false;
    }
};

int main ()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    Solution point;

    cout << point.isSubsequence(s1, s2) << endl;

    return 0;
}