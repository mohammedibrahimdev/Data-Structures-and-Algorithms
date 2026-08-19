/*
Problem      : Find The Original Array of Prefix XOR
Platform     : LeetCode
Problem ID   : 2433

Pattern      : Prefix XOR
Difficulty   : Medium

Approach:
- The first element is directly pref[0].
- For every next element:
      arr[i] = pref[i] ^ pref[i - 1]
- This works because the previous prefix cancels out
  all earlier elements.

Main Idea:
Prefix XOR → XOR two consecutive prefix values
             to recover the original element.

Example:
pref = [5, 2, 0, 3]

arr[0] = 5
arr[1] = 2 ^ 5
arr[2] = 0 ^ 2
arr[3] = 3 ^ 0

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Learned how to recover the original array from Prefix XOR.
- Practiced using XOR cancellation to reverse a prefix operation.

Mistakes:
- None
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {

        vector<int> arr(pref.size());

        arr[0] = pref[0];

        for (int i = 1; i < pref.size(); ++i) {
            arr[i] = pref[i] ^ pref[i - 1];
        }

        return arr;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> pref(n);

    for (int i = 0; i < n; ++i) {
        cin >> pref[i];
    }

    Solution point;

    vector<int> arr = point.findArray(pref);

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}