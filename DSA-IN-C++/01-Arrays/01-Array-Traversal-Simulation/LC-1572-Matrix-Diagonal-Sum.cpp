/*
Problem      : Matrix Diagonal Sum
Platform     : LeetCode
Problem ID   : 1572

Pattern      : Matrix Traversal
Difficulty   : Easy

Approach:
- Traverse the matrix once.
- Add the primary diagonal element: mat[i][i].
- Add the secondary diagonal element: mat[i][n - 1 - i].
- If the matrix size is odd, subtract the middle element
  once because it is counted twice.
- Return the final diagonal sum.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to access both diagonals of a square matrix.
- Understood that the center element belongs to both
  diagonals in an odd-sized matrix and must be counted
  only once.

Mistakes:
- None
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int sum = 0;

        for (int i = 0; i < rows; ++i) {
            sum += mat[i][i];
            sum += mat[i][rows - 1 - i];
        }

        if (rows % 2 != 0) {
            sum -= mat[rows / 2][rows / 2];
        }

        return sum;
    }
};

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    Solution point;
    cout << point.diagonalSum(matrix) << endl;

    return 0;
}