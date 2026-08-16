/*
Problem      : C. Prepend and Append
Platform     : Codeforces
Problem ID   : 1791C

Pattern      : Two Pointers
Difficulty   : Easy

Algorithm:
- Start one pointer at the beginning and one at the end.
- Compare the characters at both pointers.
- If they are different, move both pointers inward.
- Stop when they become equal or the pointers meet.
- The remaining length is:
      last - first + 1

Main Idea:
Compare from both ends → move inward → find the remaining part.

Time Complexity : O(n) per test case
Space Complexity: O(n)

Learning:
- Learned how Two Pointers can process a string from both ends.
- Practiced moving two pointers toward the center.

Mistakes:
- None
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int size;
        cin >> size;

        string arr;
        cin >> arr;

        int fisrt = 0, last = size - 1;

        while(fisrt < last)
        {
            if(arr[fisrt] == arr[last])
            {
                break;
            }

            fisrt++;
            last--;
        }

        cout << last - fisrt + 1 << endl;
    }

    return 0;
}