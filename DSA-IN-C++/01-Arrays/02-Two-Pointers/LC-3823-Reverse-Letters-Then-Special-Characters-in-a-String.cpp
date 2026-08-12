/*
Problem      : Reverse By Type
Platform     : LeetCode
Problem ID   : 3795

Pattern      : Two Pointers
Difficulty   : Medium

Algorithm:
- Use two pointers from both ends of the string.
- First pass:
    → Find alphanumeric characters from both sides.
    → Swap them to reverse their order.
    → Skip special characters.
- Second pass:
    → Find special characters from both sides.
    → Swap them to reverse their order.
    → Skip alphanumeric characters.
- Thus, both types are reversed independently while
  staying in their original positions.

Main Idea:
Two types → two separate reversals → Two Pointers.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how Two Pointers can reverse selected elements
  while ignoring other elements.
- Learned how to solve a problem by processing different
  types separately.

Mistakes:
- None
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string reverseByType(string s) {
        
        int first = 0;
        int last = s.size() - 1;

        while(first < last)
        {

            if(isalnum(s[first]) && isalnum(s[last]))
            {
                swap(s[first], s[last]);
                first++;
                last--;
            }


            if(!(isalnum(s[first])))
            {
                first++;
            }

            if(!(isalnum(s[last]))){last--;}
        }

        last = s.size() -1;
        first = 0;

        while(first < last){

            if(!isalnum(s[first]) && !isalnum(s[last]))
            {
                swap(s[first] , s[last]);
                
                last--;
                first++;
            }


            if(isalnum(s[first]))
            {first++;}

            if(isalnum(s[last])){last--;}
        }


        return s;
    }
};

int main()
{
    string s;
    cin >> s;

    Solution obj;

    cout << obj.reverseByType(s) << endl;

    return 0;
}