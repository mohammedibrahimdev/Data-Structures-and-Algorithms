/*
Problem: Print a binary triangle pattern.

Approach:
- Use nested loops.
- Each row starts with:
  - 1 for odd rows.
  - 0 for even rows.
- After every print, flip the value using:
  value = 1 - value.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern:
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    for(int row = 1;row <= n;++row)
    {
        int value;
        if(row%2 == 1)
        value = 1;
        else
        value = 0;

        for(int col = 1;col <= row;++col)
        {
            cout << value;
            value = 1 - value;
        }
        cout<< endl;
    }


    return 0;
}