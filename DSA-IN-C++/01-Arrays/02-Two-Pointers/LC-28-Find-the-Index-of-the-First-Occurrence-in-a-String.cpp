/*
Problem      : Find the Index of the First Occurrence in a String
Platform     : LeetCode
Problem ID   : 28

Pattern      : String Traversal / Brute Force
Difficulty   : Easy

Approach:
- Traverse each possible starting index in the haystack.
- Compare the characters of the needle with the
  corresponding characters in the haystack.
- If all characters match, return the starting index.
- If no match is found, return -1.

Time Complexity : O((n - m + 1) × m)
Space Complexity: O(1)

Learning:
- Learned how to perform substring matching using
  nested traversal.
- Practiced comparing two strings character by
  character.

Mistakes:
- None
*/

#include<stdlib.h>
#include<iostream>
using namespace std;

class Solution{
    public:
    int strStr(string haystack, string needle){

        int len1 = haystack.size();
        int len2 = needle.size();

        if(len2 > len1)return -1;

        for(int i = 0;i<len1;++i)
        {
            int j = 0;
            
            while(j < len2 && haystack[j + i] == needle[j]){
                j++;
            }

            if(j == len2){
                return i;
            }
            
        }

        return -1;
    }
};
int main()
{
    string haystack, needle;
    cin >> haystack;
    cin >> needle;

    Solution point;

    cout << point.strStr(haystack , needle);

    return 0;
}