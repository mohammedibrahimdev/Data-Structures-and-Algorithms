/*
Problem: 2108 - Find First Palindromic String in the Array
Platform: LeetCode

Topic:
- Strings
- Arrays

Pattern:
- Palindrome Checking
- Linear Search

Important:
- Teaches combining a helper function with linear traversal to find the first valid element.

Approach:
- Traverse the array from left to right.
- Check each word using a palindrome helper function.
- Compare characters from both ends using two pointers.
- Return the first word that is a palindrome.
- If no palindrome exists, return an empty string.

Time Complexity: O(n * m)
- n = number of words
- m = maximum length of a word

Space Complexity: O(m)
- A copy of each word is created in the helper process.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(int i = 0; i < words.size(); ++i)
        {
            string word = words[i];

            bool yes = ispalindrome(word);

            if(yes)
                return word;
        }

        return "";
    }

    bool ispalindrome(string word)
    {
        for(int i = 0; i < word.size(); ++i)
        {
            if(word[i] != word[word.size() - 1 - i])
                return false;
        }

        return true;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);

    for(int i = 0; i < n; ++i)
        cin >> words[i];

    Solution obj;

    cout << obj.firstPalindrome(words) << endl;

    return 0;
}