/*
Problem: Print all prime numbers in a given range.

Approach:
- Traverse all numbers from the starting value to the ending value.
- Skip numbers less than or equal to 1 since they are not prime.
- For each number, assume it is prime.
- Check divisibility from 2 up to the square root of the number.
- If any divisor is found, mark it as not prime and stop checking.
- If no divisor is found, print the number.

Time Complexity: O((end - start + 1) * √end)
Space Complexity: O(1)

Example:
Input:
1 20

Output:
2
3
5
7
11
13
17
19
*/

#include<iostream>
using namespace std;
int main ()
{
    int start , end;
    cin >> start >> end;

    for(int i = start;i < end; ++i)
    {
        if(i <= 1)
        continue;

        bool prime = true;

        for(int j = 2;j * j<= i;++j)
        {
            if(i%j == 0)
            {
                prime = false; break;
            }
        }

        if(prime)
        cout << i << endl;
    }

    return 0;
}