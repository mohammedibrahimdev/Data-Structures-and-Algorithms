/*
Problem      : Happy Number
Platform     : LeetCode
Problem ID   : 202

Pattern      : Fast & Slow Pointers (Floyd's Cycle Detection)
Difficulty   : Easy

Approach:
- Use two pointers: slow and fast.
- Move slow by one step and fast by two steps using
  the next number function.
- If fast becomes 1, the number is happy.
- If slow and fast meet, a cycle exists, so the number
  is not happy.

Time Complexity : O(log n)
Space Complexity: O(1)

Learning:
- Learned Floyd's Cycle Detection (Fast & Slow Pointers)
  for the first time.
- Understood how cycle detection can be applied beyond
  linked lists.
- Practiced generating the next number by summing the
  squares of its digits.

Mistakes:
- Initially did not know Floyd's Cycle Detection
  algorithm.
- lot mistakes was done.
*/

#include<iostream>
class Solution{
    public:
        bool HappyNumber(int n){

            int slow = n;
            int fast = n;

            while(1){

                slow = Nextnumber(slow);
                fast = Nextnumber(Nextnumber(fast));

                if(fast == 1) return true;

                if(fast == slow) return false;
            }
        }

        int Nextnumber(int n){

            int sum  = 0;
            while(n>0)
            {
                int digit = n%10;
                sum += digit * digit;
                n /= 10;
            }

            return sum;
        }
};


int main()
{
    int n;
    std :: cin >> n;

    Solution point;

    std:: cout << point.HappyNumber(n) << std:: endl;

    return 0;
}