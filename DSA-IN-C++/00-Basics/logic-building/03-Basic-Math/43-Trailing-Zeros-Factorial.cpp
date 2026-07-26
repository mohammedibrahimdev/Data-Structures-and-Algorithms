/*
Problem: Count Trailing Zeros in Factorial

Topic:
- Math
- Number Theory

Pattern:
- Mathematical Observation

Approach:
- Trailing zeros are created by multiplying 2 and 5.
- Since factors of 2 are always more than factors of 5, count only the number of factors of 5.
- Count multiples of 5, 25, 125, ... and add their contribution.
- Continue until the power of 5 becomes greater than n.

Time Complexity: O(log₅ n)
Space Complexity: O(1)

Example:
Input:
n = 100

Calculation:
100 / 5 = 20
100 / 25 = 4

Total trailing zeros = 24

Output:
24
*/

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long trailingZeros = 0;
    long long powerOfFive = 5;

    while (powerOfFive <= n)
    {
        trailingZeros += n / powerOfFive; 
        powerOfFive *= 5;
    }

    cout << trailingZeros << '\n';

    return 0;
}