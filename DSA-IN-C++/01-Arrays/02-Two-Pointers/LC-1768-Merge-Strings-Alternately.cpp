/*
Problem      : Merge Strings Alternately
Platform     : LeetCode
Problem ID   : 1768

Pattern      : Two Pointers (Same Direction)

Approach:
- Traverse both strings simultaneously.
- At each index:
  - Append the character from the first string (if it exists).
  - Append the character from the second string (if it exists).
- Continue until both strings have been completely traversed.

Time Complexity : O(n + m)
Space Complexity: O(n + m)

Learning:
- Learned how to traverse two sequences simultaneously.
- Practiced the Same Direction Two Pointers pattern.
- Handled strings of different lengths without using extra loops.

Mistakes:
- None
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n1 = word1.size();
        int n2 = word2.size();
        string ans;
        int i = 0;
        while(i < n1 || i < n2)
        {
            if(i < n1) ans += word1[i];
            if(i < n2) ans += word2[i];

            i++;
        }
      return ans;

    }
};

int main ()
{
    string word1, word2;
    cin >> word1;
    cin >> word2;

    Solution point;
    cout << point.mergeAlternately(word1, word2) << endl;
    
    return 0;
}