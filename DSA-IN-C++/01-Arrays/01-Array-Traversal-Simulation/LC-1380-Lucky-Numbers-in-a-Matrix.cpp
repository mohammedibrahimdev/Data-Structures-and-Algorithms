/*
Problem      : Lucky Numbers in a Matrix
Platform     : LeetCode
Problem ID   : 1380

Pattern      : Matrix Traversal
Difficulty   : Easy

Approach:
- Traverse each row to find its minimum element.
- Store the column index of the minimum element.
- Traverse that column to check whether the minimum
  element is also the maximum in its column.
- If it satisfies both conditions, add it to the answer.
- Return the list of lucky numbers.

Time Complexity : O(m × n)
Space Complexity: O(1) (excluding the
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> luckynumber(vector<vector<int>>& mat)
    {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> ans;

        for(int i = 0;i<rows;++i)
        {
            int minval = mat[i][0];
            int mincol = 0;

            for(int j = 0;j<cols;++j)
            {
                if(minval > mat[i][j])
                {
                    minval = mat[i][j];
                    mincol = j;
                }
            }

            bool islucky = true;
            for(int k = 0;k<rows;++k)
            {
                if(mat[k][mincol] > minval)
                {
                    islucky = false;
                    break;
                }
            }

            if(islucky){
                ans.push_back(minval);
            }
        }

        return ans;
    }
};

int main ()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix;

    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<n;++j)
        {
            cin >> matrix[i][j];
        }
    }

    Solution point;

    vector<int> ans = point.luckynumber(matrix);

    for(int i  =0;i<ans.size();++i)
    cout << ans[i] << endl;

    return 0;
}