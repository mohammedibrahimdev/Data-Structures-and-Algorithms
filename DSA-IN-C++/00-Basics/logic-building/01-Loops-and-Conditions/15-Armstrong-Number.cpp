/*
Problem: Check whether a number is an Armstrong number.

Approach:
- Store the original number.
- Count the number of digits in the number.
- Extract each digit one by one.
- Raise each digit to the power of the total number of digits.
- Add these values to a sum.
- Compare the sum with the original number.
- If they are equal, the number is an Armstrong number.
- Otherwise, it is not an Armstrong number.

Time Complexity: O(d)
Space Complexity: O(1)

where d = number of digits in the number.
*/
#include<iostream>
using namespace std;

int main()
{
    int n, armstrong = 0, digit, copy;
    cin >> n;

    copy = n;

    while(n > 0)
    {
        digit = n % 10;
        armstrong += digit * digit * digit;
        n /= 10;
    }

    if(armstrong == copy)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;

    return 0;
}