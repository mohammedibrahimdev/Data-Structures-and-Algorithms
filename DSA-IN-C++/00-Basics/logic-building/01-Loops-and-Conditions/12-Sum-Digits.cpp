/*
Problem: Find the sum of digits of a number.

Approach:
- Take a number N as input.
- Extract the last digit using N % 10.
- Add the digit to a running sum.
- Remove the last digit using N / 10.
- Repeat until N becomes 0.
- Print the final sum.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main ()
{
    int n,digit, sum = 0;
    cin >> n;
    while(n > 0)
    {
        digit = n%10;
        sum += digit;
        n = n/10;
    }

    cout << sum << endl;
    return 0;
}