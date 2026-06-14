/*
Problem: Check whether a year is a Leap Year.

Approach:
- A year is a leap year if:
  1. It is divisible by 400, OR
  2. It is divisible by 4 but not divisible by 100.
- Check these conditions and print the result.

Time Complexity: O(1)
Space Complexity: O(1)
*/
//CODE:
#include<iostream>
using namespace std;
int main ()
{
    int year;
    cin >> year;

    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
    cout << "Leap Year" << endl;
    else
    cout <<"Not a Leap Year" << endl;
    
    return 0;
}