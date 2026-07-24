/*
Problem      : Goal Parser Interpretation
Platform     : LeetCode
Problem ID   : 1678

Pattern      : String Traversal / Simulation
Difficulty   : Easy

Approach:
- Traverse the command string once.
- If "()" is found, append 'o' and skip the next character.
- If the current character is alphabetic, append it directly.
- Ignore the remaining parentheses.

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Learned how to parse a string by checking character patterns.
- Practiced traversing a string while conditionally skipping characters.

Mistakes:
- Initially did not skip ')' after processing "()".
- Forgot to check array bounds before accessing command[i + 1].
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    string interpret(string command)
    {
        int len = command.size();
        string ans;

        for(int i = 0;i<=len - 1;++i)
        {
            if(command[i] == '(' && command[i + 1] == ')'){
            i++;
            ans += 'o';
            }
            else if(isalpha(command[i]))
            ans += command[i];
        }

        return ans;
    }
};

int main ()
{
    string arr;
    cin >> arr;

    Solution point;

    string ans;
    ans = point.interpret(arr);

    cout << ans << endl;

    return 0;

}