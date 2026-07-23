/*
Problem      : Find Common Characters
Platform     : LeetCode
Problem ID   : 1002

Pattern      : Frequency Array (Counting)
Difficulty   : Easy

Approach:
- Create a frequency array 'common' initialized with INT_MAX.
- For each word:
  - Count the frequency of each character.
  - Update 'common' by taking the minimum frequency of
    every character.
- After processing all words, add each character to the
  answer as many times as its minimum frequency.

Time Complexity : O(n × m + 26 × n)
Space Complexity: O(26)

Learning:
- Learned how to use frequency arrays to compare
  multiple strings efficiently.
- Understood that taking the minimum frequency across
  all words gives the common characters.

Mistakes:
- Initially thought of comparing strings character by
  character.
- Later realized that frequency counting is a much
  simpler and more efficient approach.
*/

#include<climits>
#include<stdlib.h>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26, INT_MAX);

        for(string &word : words){
            vector<int> freq(26, 0);

            for(char ch : word){
                freq[ch - 'a']++;
            }

            for(int i = 0;i<26;++i){
                common[i] = min(common[i], freq[i]);
            }

        }

        vector<string> ans;

        for(int i = 0;i<26;++i){
            while(common[i] > 0){
                ans.push_back(string(1, 'a' + i));
                common[i]--;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter no.of words: ";
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    Solution point;

    vector<string> ans = point.commonChars(arr);

    cout << "Common Characters: ";

    for (string ch : ans)
        cout << ch << " ";

    cout << endl;

    return 0;
}