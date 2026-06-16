/*
Problem: Print a right triangle pattern.

Approach:
- Use nested loops.
- Outer loop controls the rows.
- Inner loop prints stars equal to the current row number.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

pattern:
*
**
***
****
*****
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; ++row)
    {
        for(int col = 1; col <= row; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}