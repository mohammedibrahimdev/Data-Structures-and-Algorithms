/*
Problem      : Smallest Divisible Digit Product I
Platform     : LeetCode
Problem ID   : 3345

Pattern      : Brute Force / Simulation
Difficulty   : Easy

Approach:
- Start from the given number n.
- Compute the product of its digits.
- Check if the product is divisible by t.
- If it is, return the current number.
- Otherwise, increment n and repeat the process.

Time Complexity : O(k × d)
Space Complexity: O(1)

Learning:
- Learned how to extract digits using modulo (%) and
  division (/).
- Practiced simulating a process until a condition is
  satisfied.

Mistakes:
- None
*/

int smallestNumber(int n, int t) {
    
    int copy = n;
    int  sum = 1;
    while(true)
    {   sum  =1;
        copy = n;
        while(copy>0)
        {
            int digit = copy%10;
            sum *= digit;
            copy /= 10;
        }
        copy = n;

        if(sum%t ==0)return copy;
        else 
        n++;
    }
}

#include <stdio.h>

int smallestNumber(int n, int t);

int main()
{
    int n, t;

    scanf("%d %d", &n, &t);

    printf("%d\n", smallestNumber(n, t));

    return 0;
}