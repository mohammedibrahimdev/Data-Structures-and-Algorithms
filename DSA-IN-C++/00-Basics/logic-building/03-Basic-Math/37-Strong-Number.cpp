/*
Problem: Check whether a number is a Strong Number.

Approach:
- Extract each digit of the number.
- Find the factorial of every digit.
- Add all the factorials.
- Compare the sum with the original number.
- If both are equal, the number is a Strong Number.

Time Complexity: O(d × 9)
where d = number of digits (maximum factorial is 9!)

Space Complexity: O(1)

Example:
145

1! + 4! + 5!
= 1 + 24 + 120
= 145

Strong Number
*/

#include<iostream>
using namespace std;
int main ()
{
    int number , copy, fact = 1, strong = 0;
    cin >> number;
    copy = number;

    while(number > 0)
    {
        int digit  = number%10;
        fact = 1;

        while(digit>0){
            fact *= digit;
            digit--;
        }

        strong += fact;

        number /= 10;
    }

    (copy == strong)? cout << "Strong Number" << endl : cout << "Not Strong Number" << endl;

    return 0;
}