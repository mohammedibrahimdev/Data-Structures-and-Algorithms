/*
Problem      : Shuffle the Array
Platform     : LeetCode
Problem ID   : 1470

Pattern      : Array Traversal (Index Mapping)
Difficulty   : Easy

Approach:
- Traverse the first half of the array.
- Place nums[i] at the even index of the result array.
- Place nums[i + n] at the next odd index.
- Return the shuffled array.

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Learned how to rearrange an array using index mapping.
- Practiced placing elements at calculated positions.

Mistakes:
- None
*/
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int len = nums.size();

        vector<int> arr(2 * n);

        for(int i = 0;i<n;++i)
        {
            arr[2 * i] = nums[i];
            arr[2 * i + 1] = nums[i + n];
        }

        return arr;

    }
};

int main ()
{
    int n , len;
    cout << "Enter no.of Elements :" << endl;
    cin >> len;

    vector<int> arr(len);
    for(int i = 0;i<len;++i)
    cin >> arr[i];

    cout << "Enter number to shift : " << endl;
    cin >> n;

    Solution point;
    point.shuffle(arr , n);

    for(int i =0 ;i<len;++i)
    cout << arr[i] << " ";

    return 0;
}