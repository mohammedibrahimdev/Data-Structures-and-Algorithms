/*
Problem: Print a repeated number triangle pattern.

Approach:
- Use nested loops.
- Outer loop controls the rows.
- Inner loop prints the current row number.
- The number of times printed is equal to the row number.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern:
1
22
333
4444
55555
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    
    for(int row = 1;row<=n;++row)
    {
        for(int col = 1;col<=row;++col)
        cout << row;
        cout << endl;
    }

    return 0;
}