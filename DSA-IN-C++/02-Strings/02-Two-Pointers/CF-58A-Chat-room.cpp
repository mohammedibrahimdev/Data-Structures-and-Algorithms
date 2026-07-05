/*
Problem      : Chat room
Platform     : Codeforces
Problem ID   : 58A

Pattern       : Two Pointers (Same Direction)

Approach:
- Traverse the given string using pointer i.
- Traverse the target string ("hello") using pointer j.
- If characters match, move both pointers.
- Otherwise, move only i.
- If j reaches the end of the target string, then
  "hello" exists as a subsequence.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to check whether one string is a
  subsequence of another.
- Practiced the Same Direction Two Pointers pattern.

Mistakes:
- None

*/
#include<iostream>
using namespace std;
int main ()
{
    int  i = 0,j = 0;
    string given , target = "hello";
    cin >> given;

    while(i < given.size() && j < target.size())
    {
        if(given[i] == target[j])
        {
            i++;
            j++;
        }
        else  i++;
    }

    if(j == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}