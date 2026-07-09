/*
Problem      : Kids With the Greatest Number of Candies
Platform     : LeetCode
Problem ID   : 1431

Pattern      : Array Traversal
Difficulty   : Easy

Approach:
- Traverse the array once to find the maximum number of candies.
- Traverse the array again.
- For each child, add the extra candies and compare the result
  with the maximum number of candies.
- Store true if the child can have the greatest number of
  candies; otherwise, store false.

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Learned how to solve a problem using multiple array traversals.
- Practiced finding the maximum element and applying conditions.

Mistakes:
- Initially missed checking the last element while finding
  the maximum value (used i < len - 1 instead of i < len).
*/

#include<iostream>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();

        vector<bool> ans(len);

        int largest = candies[0];
        for(int i = 1;i<=len - 1;++i)
        if(candies[i] > largest) largest = candies[i];
        for(int i =0;i<len;++i)
        {
            ((candies[i]+ extraCandies) >= largest)? ans[i] = true : ans[i]  = false;
        }

        return ans;
    }
};


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> candies(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> candies[i];
    }

    int extraCandies;
    cin >> extraCandies;

    Solution obj;
    vector<bool> ans = obj.kidsWithCandies(candies, extraCandies);

    for (bool x : ans)
    {
        cout << (x ? "true" : "false") << " ";
    }

    cout << endl;

    return 0;
}