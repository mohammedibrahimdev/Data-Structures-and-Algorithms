/*
Problem: Largest of Three Numbers

Approach:
- Compare each number with the other two.
- If a is greater than or equal to both b and c, a is largest.
- Else if b is greater than or equal to both a and c, b is largest.
- Otherwise, c is largest.

Concepts Used:
- if-else if-else
- Relational Operators (>, >=)
- Logical AND Operator (&&)

Time Complexity: O(1)
Space Complexity: O(1)
*/


#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a >= b && a >= c)
        cout << a << " is the largest number" << endl;
    else if(b >= a && b >= c)
        cout << b << " is the largest number" << endl;
    else
        cout << c << " is the largest number" << endl;

    return 0;
}