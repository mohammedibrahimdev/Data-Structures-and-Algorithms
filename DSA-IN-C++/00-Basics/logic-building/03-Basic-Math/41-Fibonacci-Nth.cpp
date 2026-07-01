/*
Problem: Find the nth Fibonacci number.

Approach:
- Start with the first two Fibonacci numbers: 0 and 1.
- Repeatedly compute the next number as the sum of the previous two.
- Continue until the nth position is reached.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
n = 6

Sequence:
0 1 1 2 3 5 8

Answer = 8
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int first = 0;
    int second = 1;

    for(int i = 2; i <= n; ++i)
    {
        int next = first + second;
        first = second;
        second = next;
    }

    cout << second << endl;

    return 0;
}