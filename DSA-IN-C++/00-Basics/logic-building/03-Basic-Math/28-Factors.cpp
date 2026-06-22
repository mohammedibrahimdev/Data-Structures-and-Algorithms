/*
Problem: Print all factors of a given number.

Approach:
- Iterate from 1 to the given number.
- For each value, check if it divides the number exactly.
- If the remainder is 0, it is a factor.
- Print all such factors.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
Input: 12

Output:
1
2
3
4
6
12
*/

#include<iostream>
using namespace std;
int main ()
{
    int number;
    cin >> number;

    for(int i = 1;i<number;++i)
    {
        if(number%i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}