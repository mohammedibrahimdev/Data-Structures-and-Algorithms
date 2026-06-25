/*
Problem: Compute a^b (Power / Exponentiation)

Method: Naive Iterative Approach

Approach:
- Multiply the number by itself 'power' times.
- Store the result in a variable.
- Return final result after loop ends.

Why this method?
- Simple and direct implementation of exponentiation.
- Helps understand what power means.
- Not efficient for large values of 'power'.

Time Complexity: O(power)
Space Complexity: O(1)

Example:
Input:s
number = 2, power = 5

Process:
2 × 2 × 2 × 2 × 2 = 32

Output:
32

Limitation:
- Slow for large constraints (e.g., 10^9)
- Leads to TLE in competitive programming
*/

#include<iostream>
using namespace std;

int long long pow(int number , int power)
{
    long long res = 1;

    for(int i = 1;i<= power;++i)
    res = res * number;

    return res;
}
int main ()
{
    int number, power;
    cin >> number >> power;

    cout << pow(number,power) << endl;
    return 0;
}