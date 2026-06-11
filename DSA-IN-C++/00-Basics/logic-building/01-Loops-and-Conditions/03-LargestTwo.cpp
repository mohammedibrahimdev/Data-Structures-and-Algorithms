/*
Problem: Largest of Two Numbers

Approach:
- Compare a and b.
- If a > b, print a.
- Otherwise, print b.

Time Complexity: O(1)
Space Complexity: O(1)
*/
// CODE:
#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin >> a >> b;

    cout << ((a > b)? a:b)  << " is largest number";
    return 0;
}