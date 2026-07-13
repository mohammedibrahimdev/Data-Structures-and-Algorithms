/*
Problem      : Find the Highest Altitude
Platform     : LeetCode
Problem ID   : 1732

Pattern      : Prefix Sum
Difficulty   : Easy

Approach:
- Start with an initial altitude of 0.
- Traverse the gain array and keep a running sum to
  calculate the current altitude.
- Update the maximum altitude whenever the current
  altitude exceeds the previous maximum.
- Return the highest altitude reached.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how Prefix Sum can be used to compute cumulative
  values efficiently.
- Practiced maintaining a running maximum during traversal.

Mistakes:
- None
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int len = gain.size();
        int largest = 0;
        int sum = 0;
        for(int i = 0;i<len;++i)
        {
            sum += gain[i];
            largest = max(largest , sum);
        }

        return largest;

    }
};


int main()
{
    int n;
    cin >> n;

    vector<int> gain(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> gain[i];
    }

    Solution obj;
    cout << obj.largestAltitude(gain) << endl;

    return 0;
}