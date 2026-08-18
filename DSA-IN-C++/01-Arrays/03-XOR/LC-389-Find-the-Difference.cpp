/*
Problem      : Find the Difference
Platform     : LeetCode
Problem ID   : 389

Pattern      : XOR
Difficulty   : Easy

Approach:
- XOR all characters from both strings.
- Every character that appears in both strings cancels:
      ch ^ ch = 0
- The only character left is the extra character in t.

Main Idea:
Same characters cancel → extra character remains.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how XOR can be used with characters, not only integers.
- Practiced the cancellation property of XOR.

Mistakes:
- None
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

        char ans = 0;

        for (int i = 0; i < t.size(); ++i) {
            ans ^= t[i];

            if (i < s.size())
                ans ^= s[i];
        }

        return ans;
    }
};

int main()
{
    string s, t;

    cin >> s >> t;

    Solution point;

    cout << point.findTheDifference(s, t) << endl;

    return 0;
}