/*
Problem: Print numbers from 1 to N.

Approach:
- Take N as input.
- Use a loop from 1 to N.
- Print each number on a new line.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, i;
    cin >> n;
    for(i = 1;i<n;++i)
    cout << i << endl;

    return 0;

    
}