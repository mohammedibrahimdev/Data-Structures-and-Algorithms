/*
Problem      : Determine Whether Matrix Can Be Obtained By Rotation
Platform     : LeetCode
Problem ID   : 1886

Pattern      : Matrix Traversal
Difficulty   : Easy

Approach:
- Compare the current matrix with the target matrix.
- If they are equal, return true.
- Otherwise, rotate the matrix by 90 degrees clockwise.
- Repeat this process at most four times.
- If no rotation matches the target, return false.

Time Complexity : O(n²)
Space Complexity: O(1)

Learning:
- Learned how to rotate a matrix by 90 degrees using
  transpose followed by reversing each row.
- Practiced comparing two matrices after each rotation.

*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    bool findrotate(vector<vector<int>>& matrix, vector<vector<int>> target){

        int rows = matrix.size();
    
        for(int i = 0;i<4;++i)
        {
            if(matrix == target) return true;

            rotate(matrix, rows);
        }

        return false;

    }

    void rotate(vector<vector<int>>& matrix, int rows){

        for(int i = 0;i<rows;++i){
            for(int j = i + 1;j<rows;++j)

            swap(matrix[i][j], matrix[j][i]);
        }

        for(int i =  0;i<rows;++i)
        reverse(matrix[i].begin(), matrix[i].end());
    }
};

int main ()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> target(n , vector<int>(n));
    
    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j)
        cin >> matrix[i][j];
    }

    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j)
        cin >> target[i][j];
    }

    Solution point;

    cout << point.findrotate(matrix, target) << endl;

    return 0;
}