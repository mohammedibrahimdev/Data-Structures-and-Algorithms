/*
Problem: Print an inverted pyramid pattern.

Approach:
- Use nested loops.
- Print increasing spaces in each row.
- Print decreasing odd number of stars.
- Spaces increase by 1 per row.
- Stars decrease by 2 per row.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern (n = 5):

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
    int n, m = 1;
    cin >> n;

    for(int row = 1;row <= n;++row)
    {
        for(int space = 1;space <row;++space)
        cout << " ";

        for(int start = 1;start <= n*2 - m;++start)
        cout << "*";

      
        cout << endl;
        m += 2;
    }

    return 0;
}