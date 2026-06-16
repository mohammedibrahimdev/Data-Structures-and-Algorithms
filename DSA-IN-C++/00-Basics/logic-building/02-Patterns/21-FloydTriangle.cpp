/*
Problem: Print Floyd's Triangle.

Approach:
- Use a variable to keep track of the current number.
- Outer loop controls the rows.
- Inner loop prints numbers for each row.
- After printing a number, increment it.
- Print a new line after each row.

Time Complexity: O(n²)
Space Complexity: O(1)

Pattern:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, number = 1;
    cin >> n;
    
    for(int row = 0;row<n;++row)
    {
        for(int col = 0;col<=row;++col){
            cout << number << " " ; 
            number++;
        }
        cout << endl;
    }

    return 0;
}