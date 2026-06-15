/*
Problem: Check whether a number is a palindrome.

Approach:
- Store the original number.
- Reverse the number by extracting its digits one by one.
- Compare the reversed number with the original number.
- If both are equal, the number is a palindrome.
- Otherwise, it is not a palindrome.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool palindrome = true;

    for(int i = 0; i < s.size() / 2; ++i)
    {
        if(s[i] != s[s.size() - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Is Palindrome\n";
    else
        cout << "Is Not Palindrome\n";

    return 0;
}