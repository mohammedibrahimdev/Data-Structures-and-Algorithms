/*
Problem: Check whether a number is prime or not.

Approach:
- A prime number has exactly two factors: 1 and itself.
- Numbers less than or equal to 1 are not prime.
- Check divisibility from 2 up to the square root of the number.
- If any divisor is found, the number is not prime.
- Otherwise, the number is prime.

Time Complexity: O(√n)
Space Complexity: O(1)

Example:
Input: 13
Output: A prime number

Input: 12
Output: Not a prime number
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    // 0 and 1 are not prime numbers
    if(number <= 1)
    {
        cout << "Not a prime number" << endl;
        return 0;
    }

    bool prime = true;

    // Check divisors only up to sqrt(number)
    for(int i = 2; i * i <= number; ++i)
    {
        // If divisible, it is not prime
        if(number % i == 0)
        {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "A prime number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}