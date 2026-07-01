/*
Problem: Sieve of Eratosthenes - Print all prime numbers from 1 to n.

Approach:
- Create an array where index represents the number.
- Assume all numbers from 2 to n are prime initially.
- Start from 2 and eliminate multiples of each prime.
- Only process i up to sqrt(n).
- Skip numbers already marked as non-prime.
- Remaining unmarked numbers are primes.

Key Idea:
- Each composite number is marked only once.
- Directly eliminate multiples instead of checking divisibility repeatedly.

Time Complexity: O(n log log n)
Space Complexity: O(n)

Example:
Input: 20
Output: 2 3 5 7 11 13 17 19
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    // 0 = prime, 1 = not prime
    int arr[number + 1] = {0};

    // Sieve process
    for (int i = 2; i * i <= number; i++)
    {
        if (arr[i] == 0)   // only process prime numbers
        {
            for (int j = i * i; j <= number; j += i)
            {
                arr[j] = 1; // mark as not prime
            }
        }
    }

    // print primes
    for (int i = 2; i <= number; i++)
    {
        if (arr[i] == 0)
            cout << i << " ";
    }

    return 0;
}