/*
Problem: Check whether a number is Even or Odd.

Approach:
- Take an integer input.
- Check if n % 2 == 0.
- If true, print "Even".
- Otherwise, print "Not Even".

Time Complexity: O(1)
Space Complexity: O(1)
*/

// CODE:
#include<iostream>
using namespace std;
int  main ()
{
    int n;
    cin >> n;
    
    cout << ((n%2 == 0) ? "Even" : "Not Even");
    return 0; 
}