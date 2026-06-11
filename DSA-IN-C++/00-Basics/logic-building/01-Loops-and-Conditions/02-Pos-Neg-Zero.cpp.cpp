/*
Problem: Check whether a number is Positive, Negative, or Zero.

Approach:
- Take an integer input n.
- If n > 0, print "Positive".
- Else if n < 0, print "Negative".
- Otherwise, print "Zero".

Time Complexity: O(1)
Space Complexity: O(1)
*/

// CODE:
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    if(n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero"<< endl;

    return 0;
}