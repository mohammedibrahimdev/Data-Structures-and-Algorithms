/*
Problem: Print the multiplication table of a number.

Approach:
- Take a number N as input.
- Use a loop from 1 to 10.
- Multiply N by the current loop variable.
- Print the result in table format.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for(int i = 1;i<=10;++i)
    {
        cout << i << " x " << n << " = "<< i * n << endl;
    }
    return 0;
}