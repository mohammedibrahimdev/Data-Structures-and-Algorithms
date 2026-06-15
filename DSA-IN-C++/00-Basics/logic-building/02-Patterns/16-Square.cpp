/*
Problem: Print a hollow square pattern.

Approach:
- Print the first row completely.
- Print the middle rows with:
  - A boundary character at the beginning.
  - Spaces in the middle.
  - A boundary character at the end.
- Print the last row completely.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for(int i = 0;i<n;++i)
    cout << "*";
    cout << endl;
    for(int i = 0;i<n - 2;++i)
    {
        cout << "*";
        for(int j = 0;j<n - 2;++j)
        cout << " ";
        cout << "*" << endl;
    }

    for(int i = 0;i<n;++i)
    cout << "*";

    return 0;
}