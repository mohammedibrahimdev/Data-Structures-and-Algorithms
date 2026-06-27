/*
Problem: Check whether a 3-digit number is an Armstrong Number.

Approach:
- Store the original number.
- Extract each digit one by one.
- Find the cube of each digit.
- Add all the cubes.
- Compare the sum with the original number.
- If both are equal, it is an Armstrong Number.

Time Complexity: O(d)
where d = number of digits

Space Complexity: O(1)

Example:
153

1³ + 5³ + 3³
= 1 + 125 + 27
= 153

Armstrong Number
*/

#include<iostream>
using namespace std;
int main ()
{
    int number, copy , armstrong = 0, temp = 1;
    cin >> number;
    copy = number;

    while(number > 0)
    {
        int digit = number%10;
        temp = 1;

        for(int i = 0;i<3;++i)
        temp *= digit;

        armstrong += temp;

        number /= 10;
    }

    (copy == armstrong)? cout << "Armstrong Number" << endl : cout << "Not Armstrong Number" << endl;

    return 0;
}