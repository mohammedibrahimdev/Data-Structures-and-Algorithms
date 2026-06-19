/*
Problem: Print an Hourglass (Sandglass) Pattern.

Approach:
- Divide the pattern into two parts:
  1. Inverted Pyramid (upper half)
  2. Pyramid (lower half)
- Print leading spaces to maintain alignment.
- Print an odd number of stars in each row.
- Stars decrease by 2 in the upper half.
- Stars increase by 2 in the lower half.
- Avoid repeating the middle row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern (n = 5):

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/

#include<iostream>
using namespace std;
int main ()
{
    int n, m= 1;
    cin >> n;

    // upper part
    for(int row = 1;row < n;++ row)
    {
        for(int space = 1;space < row; ++ space)
        cout << " ";

        for(int start = 1;start <= n*2 - m;++start)
        cout << "*";

        cout << endl;
        m += 2;
    }
    m = 1;

    //lower part
    for(int row = 1;row <= n;++row)
    {
        for(int space = 1;space <= n - row;++space)
        cout <<  " ";

        for(int start = 1;start <= m;++start)
        cout << "*";

        cout << endl;
        m += 2;
    }

    return 0;
}
