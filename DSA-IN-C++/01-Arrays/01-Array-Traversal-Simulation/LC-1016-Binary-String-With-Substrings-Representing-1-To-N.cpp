/*
Problem      : Binary String With Substrings Representing 1 To N
Platform     : LeetCode
Problem ID   : 1016

Pattern      : String Search / Simulation
Difficulty   : Medium

Approach:
- Traverse every number from 1 to n.
- Convert each number into its binary representation.
- Check whether the binary string exists in the given string.
- If any binary representation is missing, return false.
- Otherwise, return true.

Time Complexity : O(n × log n × m)
Space Complexity: O(log n)

Learning:
- Learned how to convert a decimal number to binary.
- Practiced searching substrings using string::find().
- Understood how simulation can be combined with string searching.

Mistakes:
- None
*/

#include<iostream>
using namespace std;

class Solution{
    public:
    bool queryString(string s , int n){
        for(int i = 1;i<=n;++i)
        {
            string binary = Tobinary(i);
            if(s.find(binary) == string::npos)
            return false;
        }
        return true;
    }

    string Tobinary(int number){
        if(number == 0) return "0";

        string binary = "";

        while(number > 0){
            binary = char(number%2 + '0') + binary;
            number /= 2;
        }

        return binary;
    }
};

int main()
{
    string arr;
    int n;
    cin >> arr;
    cin >> n;

    Solution point;

    cout << point.queryString(arr, n) << endl;

    return 0;
}