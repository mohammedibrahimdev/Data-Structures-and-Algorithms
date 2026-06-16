/*
Problem: Print a pyramid pattern.

Approach:
- Use nested loops.
- Print spaces before the stars to center the pyramid.
- Print an odd number of stars in each row.
- The number of stars increases by 2 in every row.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern:
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
    int n,m = 1;
    cin >> n;
    
    for(int row = 0;row<n;++row)
    {
        for(int space = 0;space<n - row - 1;++space)
        cout << " "; 

        for(int start = 0;start<m;++start)
        cout << "*";

        cout << endl;
        m += 2;
    }


    return 0;
}