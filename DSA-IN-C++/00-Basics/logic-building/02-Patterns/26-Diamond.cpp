/*
Problem: Print a Diamond Pattern.

Approach:
- Print a pyramid for the upper half.
- Print an inverted pyramid for the lower half.
- Avoid repeating the widest row.
- Use spaces for alignment and odd-numbered stars.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern (n = 5):

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include<iostream>
using namespace std;
int main ()
{
    int  n, m= 1;
    cin  >> n;

    //upper part
    for(int row = 1;row <= n;++row)
    {
        for(int space = 1;space<=n - row;++space)
        cout << " ";

        for(int start = 1;start <= m;++start)
        cout << "*";

        cout << endl;
        m += 2;
    }
    m = 3;

    // lower part
    for(int row = 1;row < n;++row)
    {
        
        for(int space = 1;space <=row;++space)
        cout << " ";

        for(int start = 1;start <= n *2 - m  ;++start)
        cout << "*";

        cout << endl;
        m += 2;
    }

    return 0;
}