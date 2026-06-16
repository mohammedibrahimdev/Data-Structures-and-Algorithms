/*
Problem: Find the sum of the first N natural numbers.

Approach:
- Take N as input.
- Use a loop from 1 to N.
- Add each number to a running sum.
- Print the final sum.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, sum = 0;
    cin >> n; 

    while(n>=1){
        sum += n;
        n--;
    }

    cout << "The sum is : "<< sum << endl;
    return 0;
}