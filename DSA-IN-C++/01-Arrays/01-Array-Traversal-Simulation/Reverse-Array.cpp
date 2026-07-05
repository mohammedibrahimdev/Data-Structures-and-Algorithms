/*
Problem: Reverse an array.

Pattern: Two Pointers

Approach:
- Use two pointers:
  - One at the beginning of the array.
  - One at the end of the array.
- Swap the elements at both pointers.
- Move the left pointer forward and the right pointer backward.
- Continue until both pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream> 
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr){
    int n = arr.size();

    for(int i = 0;i<n / 2;++i){
        swap(arr[i] , arr[n - i - 1]);
    }
}

void printArray(const vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout<< endl;

}
int main ()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }

    reverseArray(arr);
    printArray(arr);
    
    return 0;
}