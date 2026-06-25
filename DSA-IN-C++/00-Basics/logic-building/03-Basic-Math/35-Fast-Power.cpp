/*
Problem: Find a^b using Fast Power (Binary Exponentiation).

Method: Binary Exponentiation

Approach:
- If the current power is odd, multiply the result by the base.
- Square the base after each step.
- Divide the power by 2.
- Continue until power becomes 0.

Time Complexity: O(log b)
Space Complexity: O(1)

Example:
2^10

result = 1

power = 10 (even)
base = 4

power = 5 (odd)
result = 4
base = 16

power = 2 (even)
base = 256

power = 1 (odd)
result = 1024

Answer = 1024
*/

#include<iostream>
using namespace std;
int main ()
{
    int number , power, result = 1;
    cin >> number >> power;

    while(power > 0)
    {
        if(power%2 == 0)
        {
            number *= number;
        }
        else
        {
            result *= number;
            number *= number;
        }

        power /= 2;
    }

    cout << result << endl;

    return 0;
}