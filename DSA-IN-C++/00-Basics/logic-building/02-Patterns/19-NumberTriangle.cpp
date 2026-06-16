/*
Problem: Print a number triangle pattern.

Pattern: Number Triangle

Approach:
- Use nested loops.
- For each row, print numbers from 1 to the row number.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

pattern:
1
12
123
1234
12345
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for(int row = 1;row<=n;++row)
    {
        for(int col = 1;col<row;++col)
        cout << col;
        cout << endl;
    }
    return 0;
}