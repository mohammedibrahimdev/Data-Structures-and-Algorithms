/*
Problem      : Defanging an IP Address
Platform     : LeetCode
Problem ID   : 1108

Pattern      : String Traversal / Simulation
Difficulty   : Easy

Approach:
- Traverse the IP address character by character.
- If the current character is '.', append "[.]".
- Otherwise, append the current character.
- Return the modified string.

Time Complexity : O(n)
Space Complexity: O(n)

Mistakes:
- None
*/

#include<iostream>
using  namespace std;

class Solution{
    public:
    string defangIPaddr(string address){
        
        string ans;

        for(char ch : address)
        {
            if(ch == '.')
            ans += "[.]";
            else ans += ch;
        }

        return ans;
    }
};

int main ()
{
    string arr;
    cin >> arr;

    Solution point;
    
    cout << point.defangIPaddr(arr) << endl;

    return 0;
}