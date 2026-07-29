
/*
Problem      : Add to Array-Form of Integer
Platform     : LeetCode
Problem ID   : 989

Pattern      : Simulation / Carry Handling
Difficulty   : Easy

Approach:
- Start from the last digit of the array.
- Add the current digit to k.
- Store the last digit of the sum in the answer.
- Carry the remaining value by dividing k by 10.
- Continue until all digits and carry are processed.
- Reverse the answer to obtain the final array-form integer.

Time Complexity : O(max(n, log₁₀(k)))
Space Complexity: O(max(n, log₁₀(k)))

Learning:
- Learned how to simulate manual addition digit by digit.
- Practiced handling carry without converting the array
  into a large integer.
  
Mistakes:
- None
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
 
class solution{
    public:
    vector<int> addToArrayForm(vector<int> nums, int k)
    {
        vector<int> ans;
        int len = nums.size() - 1;

        while(len >= 0 || k >0)
        {
            if(len >= 0){
                k += nums[len];
                len--;
            }

            ans.push_back(k % 10);
            k /= 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;

    }
};

int main ()
{
    int n, k;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    cin >> arr[i];

    cin >> k ;
    solution point;

    arr = point.addToArrayForm(arr, k);

    for(int i = 0;i<n;++i)
    cout << arr[i] << " ";

    return 0;
} 