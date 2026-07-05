/*
Problem: Find the second largest element in an array.

Pattern: Traversal

Approach:
- Maintain two variables:
  - largest
  - secondLargest
- Traverse the array once.
- If the current element is greater than largest:
  - Update secondLargest to largest.
  - Update largest to the current element.
- Otherwise, if the current element is greater than secondLargest
  and not equal to largest:
  - Update secondLargest.
- Return secondLargest after traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int findSecoundlargest(vector<int>& arr)
{
    if(arr.empty()) return -1;

    int largest = arr[0];
    int secoundlargest;

    for(size_t i = 1;i<arr.size();++i)
    {
        if(largest < arr[i])
        {
            secoundlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secoundlargest && largest != arr[i])
        secoundlargest = arr[i];
    }
    
    return secoundlargest;

}

int main ()
{
    int n;
    cin>> n;
    
    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    cin >> arr[i];

    cout<< findSecoundlargest(arr);
    return 0;
}
