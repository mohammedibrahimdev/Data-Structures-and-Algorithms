/*
Problem: Reverse a number.

Approach:
- Extract the last digit using n % 10.
- Append the digit to the reversed number.
- Remove the last digit from n using n / 10.
- Repeat until n becomes 0.
- Print the reversed number.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, revn = 0, digit;
    cin >> n;
    while(n>0)
    {
        digit = n%10;
        revn = (revn * 10) + digit;
        n = n/10;
    }

    cout << revn << endl;
    return 0;

}