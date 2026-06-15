/*
Problem: Count the number of digits in a number.

Approach:
- Repeatedly divide the number by 10.
- Count how many times division occurs before the number becomes 0.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, count = 0;
    cin >> n;
    while(n > 0)
    {
        n = n/10;
        count ++;
    }

    cout << count << endl;
    return 0;
}
