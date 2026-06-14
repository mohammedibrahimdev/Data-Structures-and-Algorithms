/*
Problem: Print numbers from N to 1.

Approach:
- Take N as input.
- Use a loop starting from N and decrement it until 1.
- Print each number on a new line.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    while(n >= 1)
    {
        cout << n << endl;
        n--;
    }

    return 0;
}