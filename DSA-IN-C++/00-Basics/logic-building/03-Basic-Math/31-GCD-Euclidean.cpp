/*
Problem: Find the Greatest Common Divisor (GCD) of two numbers.

Method: Euclidean Algorithm (Optimized GCD)

Why this method?
- The naive approach checks every number from 1 to min(a, b).
- This can be slow for large numbers.
- The Euclidean Algorithm finds the GCD much faster by using remainders.
- It is the standard method used in Competitive Programming.

Algorithm:
- While both numbers are greater than 0:
    1. Divide the larger number by the smaller number.
    2. Store the remainder.
    3. Replace the larger number with the smaller number.
    4. Replace the smaller number with the remainder.
- When the remainder becomes 0, the remaining non-zero number is the GCD.

Time Complexity:
- Naive Method      : O(min(a, b))
- Euclidean Method  : O(log(min(a, b)))

Space Complexity: O(1)

Example:
Input:
48 18

Process:
48 % 18 = 12
18 % 12 = 6
12 % 6 = 0

Result:
GCD = 6

Learning:
- Naive GCD teaches what a GCD is.
- Euclidean Algorithm teaches how to find it efficiently.
*/
// My implementation of Euclidean Algorithm using min() and max().

#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;

    // Input two numbers
    cin >> a >> b;

    // Repeat until one number becomes 0
    while(min(a, b) > 0)
    {
        // Store the smaller number
        temp = min(a, b);

        // Find remainder when larger number is divided by smaller number 
        b = max(a, b) % min(a, b);

        // Move the smaller number into a
        a = temp;
    }

    // When the loop ends:
    // a = GCD
    // b = 0
    cout << a << endl;

    return 0;
}