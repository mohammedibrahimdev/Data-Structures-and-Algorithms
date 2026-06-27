/*
Problem: Find the integer square root of a number.

Approach:
- Check numbers starting from 1.
- Continue while i * i <= number.
- The last value of i satisfying the condition is the integer square root.

Time Complexity: O(√n)
Space Complexity: O(1)

Example:
25

1² = 1
2² = 4
3² = 9
4² = 16
5² = 25

Square Root = 5
*/

#include<iostream>
using namespace std;
int main ()
{
    int number;
    cin >> number;

    cout << number * number << endl;

    return 0;
}