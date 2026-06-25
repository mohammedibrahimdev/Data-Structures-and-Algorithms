
/*
Problem: Check whether a number is a Perfect Number.

Approach:
- Find all proper divisors of the number.
- Proper divisors are divisors excluding the number itself.
- Add all proper divisors.
- If the sum equals the number, it is a Perfect Number.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
6

Divisors: 1, 2, 3
Sum = 1 + 2 + 3 = 6

Perfect Number
*/
#include<iostream>
using namespace std;
int  main ()
{
    int n, p = 0;
    cin >> n;

    for(int i = 1;i<n;++i)
    {
        if(n%i == 0)
        p += i;
    }

    if(p == n)
    cout << "Perfect Number" << endl;
    else
    cout << "Not Perfect Number" << endl;

    return 0;
}