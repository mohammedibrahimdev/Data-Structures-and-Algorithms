/*
Problem: Find the Least Common Multiple (LCM) of two numbers.

Method: Using GCD (Euclidean Algorithm)

Key Formula:
LCM(a, b) = (a * b) / GCD(a, b)

Approach:
- First compute GCD using Euclidean algorithm
- Then apply the formula to get LCM
- Use (a / gcd) * b instead of (a * b) / gcd to avoid overflow

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)

Example:
a = 12, b = 18

GCD = 6
LCM = (12 / 6) * 18 = 36
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ac = a, bc = b;

    // Step 1: Compute GCD (Euclidean Algorithm)
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;

    // Step 2: Compute LCM using formula
    int lcm = (ac / gcd) * bc;

    cout << lcm << endl;

    return 0;
}