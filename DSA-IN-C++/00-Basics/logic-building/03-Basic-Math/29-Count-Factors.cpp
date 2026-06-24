/*
Problem: Count the total number of factors of a given number.

Approach:
- Iterate from 1 to the given number.
- Check if each value divides the number exactly.
- If the remainder is 0, it is a factor.
- Increment the count for every factor found.
- Print the final count.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
Input: 12

Factors:
1 2 3 4 6 12

Output:
6
*/

#include<iostream>
using namespace std;
int main ()
{
    int number, count = 0;
    cin >> number;

    for(int i = 1;i<=number;++i)
    {
        if(number%i == 0)
        count++;

    }
    cout << count << endl;
    return 0;

}