/*
Problem      : Final Value of Variable After Performing Operations
Platform     : LeetCode
Problem ID   : 2011

Pattern      : Simulation / String Traversal
Difficulty   : Easy

Approach:
- Start the variable x with value 0.
- Traverse each operation string.
- Check the second character of the operation.
- If it is '+', increase x.
- Otherwise, decrease x.
- Return the final value of x.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to simulate operations step by step.
- Practiced string traversal and accessing characters
  using index.

Mistakes:
- wrong index.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(string ch : operations)
        {
            if(ch[1] == '+')
                x++;
            else
                x--;
        }

        return x;
    }
};

int main()
{
    vector<string> operations = {"--X", "X++", "X++"};

    Solution obj;

    cout << obj.finalValueAfterOperations(operations);

    return 0;
}