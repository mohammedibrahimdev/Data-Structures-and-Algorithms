/*
Problem: Find the Greatest Common Divisor (GCD) of two numbers.

Method: Euclidean Algorithm (Standard)

Approach:
- Repeatedly replace (a, b) with (b, a % b).
- When b becomes 0, a contains the GCD.

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)

Example:
48 18
↓
18 12
↓
12 6
↓
6 0

GCD = 6
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (b != 0)
    {
        int temp = a;

        a = b;
        b = temp % b;
    }

    cout << a << endl;

    return 0;
}