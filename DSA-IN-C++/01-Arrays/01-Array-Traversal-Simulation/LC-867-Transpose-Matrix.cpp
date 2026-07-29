/*
Problem      : Transpose Matrix
Platform     : LeetCode
Problem ID   : 867

Pattern      : Matrix Traversal
Difficulty   : Easy

Approach:
- Find the number of rows (m) and columns (n).
- Create a new matrix of size n × m.
- Traverse the original matrix.
- Place each element at its transposed position:
  ans[j][i] = matrix[i][j].
- Return the transposed matrix.

Time Complexity : O(m × n)
Space Complexity: O(m × n)

Learning:
- Learned how to traverse a 2D matrix using nested loops.
- Understood that transpose swaps rows and columns.
- Practiced creating a new matrix with reversed dimensions.

Mistakes:
- None
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
};


int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;

    vector<vector<int>> ans = obj.transpose(matrix);

    for(int i = 0; i < ans.size(); ++i)
    {
        for(int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}