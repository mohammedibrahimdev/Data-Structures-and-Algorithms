/*
Problem      : A. Favorite Problem
Platform     : Codeforces
Problem ID   : 1462A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Two Pointers

Important    : Teaches processing an array from both ends using two pointers.

Approach     :
- Set `left` at the beginning and `right` at the end.
- For even positions, take the element from `left`.
- For odd positions, take the element from `right`.
- Move the corresponding pointer after each selection.

Time Complexity  : O(n)
Space Complexity : O(n)
*/


#include<vector>
#include<iostream>
using namespace std;

int main(){

    int loop;
    cin >> loop;

    while(loop--){

        int size;
        cin >> size;
        vector<int> arr(size);

        for(int i  = 0;i<size;++i)
        cin >> arr[i];

        vector<int> ans(size);
        
        int left = 0;
        int right = size - 1;
        for(int i =0 ;i<size;++i){

            if(i %2 == 0){
                ans[i] = arr[left++];
            }
            else{
                ans[i] = arr[right--];
            }
        }

        for(int i = 0;i<size;++i){
            cout << ans[i] << " " ;
        }
    }

    return 0;
}