/*
Problem      : Prison Cells After N Days
Platform     : LeetCode
Problem ID   : 957

Pattern      : Simulation + Cycle Detection
Difficulty   : Medium

Algorithm:
- Each day, a middle cell becomes 1 if its two neighbors
  are equal; otherwise it becomes 0.
- First and last cells always become 0.
- The important observation is that the cell states repeat.
- The cycle length is 14, so reduce n using this cycle
  before simulating.

Main Idea:
Large n → repeating states → cycle = 14 → reduce n → simulate

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how cycle detection can optimize a simulation.
- Learned to look for repeating states when n is very large.

Mistakes:
- None
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        n = (n - 1)%14 + 1;

        while (n--) {
            vector<int> next(8, 0);

            for (int i = 1; i < 7; ++i) {
                next[i] = (cells[i - 1] == cells[i + 1]);
            }

            cells = next;
        }

        return cells;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> cells(8);

    for (int i = 0; i < 8; ++i)
        cin >> cells[i];

    Solution obj;

    vector<int> ans = obj.prisonAfterNDays(cells, n);

    for (int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}