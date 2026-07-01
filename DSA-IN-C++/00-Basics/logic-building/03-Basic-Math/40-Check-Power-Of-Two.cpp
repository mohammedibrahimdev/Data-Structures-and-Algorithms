/*
Problem: Check whether a number is a Power of Two.

Approach 1:
- Repeatedly divide the number by 2.
- If it becomes 1, it is a Power of Two.
- Otherwise, it is not.

Approach 2 (Optimal):
- A Power of Two contains exactly one set bit.
- Use the expression:
    n & (n - 1)
- If the result is 0 (and n > 0), it is a Power of Two.

Time Complexity:
Naive  : O(log n)
Optimal: O(1)

Space Complexity: O(1)

Examples:
1  -> Power of Two
2  -> Power of Two
4  -> Power of Two
8  -> Power of Two
10 -> Not Power of Two
16 -> Power of Two
*/

#include<iostream>
using namespace std;
int main ()
{
    int number;
    cin >> number;

    if(number > 0 && (number &(number - 1)) == 0)
    cout << "Power of Two" << endl;
    else 
    cout << "Not power of Two" << endl;

    return 0;
}

