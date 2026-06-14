/*
Problem: Find the factorial of a number.

Approach:
- Take N as input.
- Initialize factorial as 1.
- Multiply factorial by each number from 1 to N.
- Print the final factorial value.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main()
{
    int fact = 1, n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        fact *= i;
    }

    cout << fact;
    return 0;
}