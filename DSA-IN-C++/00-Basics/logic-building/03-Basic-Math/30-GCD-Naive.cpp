
/*
Problem: Find the Greatest Common Divisor (GCD) of two numbers.

Method: Naive / Brute Force GCD

Why this method?
- This is the most straightforward way to find the GCD.
- Check every number from 1 to the smaller of the two numbers.
- Keep track of the largest number that divides both.
- Useful for understanding what GCD means.
- Not efficient for large inputs.

Algorithm:
- Iterate from 1 to min(a, b).
- If the current number divides both a and b:
    - Update the GCD.
- After the loop, the last common divisor found is the GCD.

Time Complexity: O(min(a, b))
Space Complexity: O(1)

Example:
Input:
12 18

Process:
1 divides both -> GCD = 1
2 divides both -> GCD = 2
3 divides both -> GCD = 3
6 divides both -> GCD = 6

Output:
6

Learning:
- Helps understand the concept of GCD.
- Euclidean Algorithm is the optimized approach used in Competitive Programming.
*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, GCD = 1;
    cin >> a >> b;

    // Check every number from 1 to min(a, b)
    for(int i = 1; i <= min(a, b); ++i)
    {
        // If i divides both numbers
        if(a % i == 0 && b % i == 0)
        {
            // Store the latest common divisor
            GCD = i;
        }
    }

    cout << GCD << endl;

    return 0;
}