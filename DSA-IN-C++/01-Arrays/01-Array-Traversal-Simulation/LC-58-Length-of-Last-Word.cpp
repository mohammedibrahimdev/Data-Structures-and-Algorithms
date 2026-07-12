/*
Problem      : Length of Last Word
Platform     : LeetCode
Problem ID   : 58

Pattern      : String Traversal
Difficulty   : Easy

Approach:
- Start from the end of the string.
- Skip all trailing spaces.
- Count characters until the next space or the beginning
  of the string is reached.
- Return the count as the length of the last word.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to traverse a string from right to left.
- Practiced handling trailing spaces efficiently.

Mistakes:
- tracking in reverse
*/

#include<string>
#include<iostream>
using namespace std;

class Solution{
    public:
    int Lenghtoflastword(string arr)
    { 
       long long int len = arr.size();
       long int count = 0;
       long long int i = len - 1;

       while(i>= 0 && arr[i--] == ' ')

       while(i >= 0 && arr[i--] != ' ') count++;

       return 0;
    }
};

int main ()
{
    string arr;
    getline(cin , arr);

    Solution point;

    cout << point.Lenghtoflastword(arr) << endl;

    return 0;
}