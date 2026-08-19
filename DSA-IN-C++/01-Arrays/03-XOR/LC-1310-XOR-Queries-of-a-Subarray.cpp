/*
Problem      : XOR Queries of a Subarray
Platform     : LeetCode
Problem ID   : 1310

Pattern      : Prefix XOR
Difficulty   : Medium

Approach:
- Create a prefix XOR array.
- prefix[i] stores the XOR of elements before index i.
- For a query [left, right], use:
      prefix[right + 1] ^ prefix[left]
- This removes the XOR of elements before left and gives
  the XOR of the required range.

Main Idea:
Build Prefix XOR once → answer every range query quickly.

Why XOR works:
- x ^ x = 0
- x ^ 0 = x
- Therefore, the unwanted prefix elements cancel out.

Time Complexity : O(n + q)
Space Complexity: O(n)

Where:
- n = size of arr
- q = number of queries

Learning:
- Learned how to extend the XOR pattern into Prefix XOR.
- Learned how Prefix XOR can answer range queries efficiently.

Mistakes:
- None
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        vector<int> prefix(arr.size() + 1, 0);

        for (int i = 0; i < arr.size(); i++) {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }

        vector<int> answer;

        for (auto& q : queries) {
            int left = q[0];
            int right = q[1];

            answer.push_back(prefix[right + 1] ^ prefix[left]);
        }

        return answer;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    vector<vector<int>> queries(q, vector<int>(2));

    for (int i = 0; i < q; ++i) {
        cin >> queries[i][0] >> queries[i][1];
    }

    Solution point;

    vector<int> answer = point.xorQueries(arr, queries);

    for (int x : answer) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}