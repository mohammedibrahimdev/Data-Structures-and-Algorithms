/*
Problem      : Rotate Image
Platform     : LeetCode
Problem ID   : 48

Pattern      : Matrix Traversal
Difficulty   : Medium

Approach:
- Transpose the matrix by swapping matrix[i][j] with
  matrix[j][i].
- Reverse each row of the transposed matrix.
- The matrix is now rotated 90 degrees clockwise
  in-place.

Time Complexity : O(n²)
Space Complexity: O(1)

Learning:
- Learned how to rotate a matrix in-place without
  using an extra matrix.
- Understood that a 90° clockwise rotation can be
  achieved using transpose followed by reversing
  each row.

Mistakes:
- None
*/

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void Rotate(vector<vector<int>>& matrix)
    {
        int rows = matrix.size();
        for(int i = 0;i<rows;++i){
            for(int j = i + 1;j<rows;++j){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        for(int i = 0;i<rows;++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main ()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j)
        cin >> mat[i][j];
    }

    Solution point;
    point.Rotate(mat);

    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            cout << mat[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}