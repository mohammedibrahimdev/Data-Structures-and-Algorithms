/*
Problem      : Richest Customer Wealth
Platform     : LeetCode
Problem ID   : 1672

Pattern      : Matrix Traversal

Approach:
- Traverse each customer's account.
- Calculate the total wealth by summing all accounts.
- Keep track of the maximum wealth found so far.
- Return the maximum wealth.

Time Complexity : O(m × n)
Space Complexity: O(1)

Learning:
- Learned how to traverse a 2D array.
- Practiced row-wise summation and finding the maximum value.

Mistakes:
- Used an extra array to store each customer's wealth.
  The maximum wealth can be tracked directly without
  additional storage.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> accounts(m, vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> accounts[i][j];
        }
    }

    Solution obj;
    cout << obj.maximumWealth(accounts) << endl;

    return 0;
}

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int len = accounts.size();
        int arr[len];
        for(int i =0;i<len;++i)
        {
            int sum =0;
            for(int j =0 ;j<accounts[i].size();++j)
            {
                sum += accounts[i][j];
            }

            arr[i] = sum;
        }

        int largest = arr[0];
        for(int i = 1;i<len;++i)
        {
            if(largest < arr[i])
            {
                largest  = arr[i];
            }
        }

        return largest;
    }

};