/*
Problem      : Maximum Number of Words Found in Sentences
Platform     : LeetCode
Problem ID   : 2114

Pattern      : String Traversal
Difficulty   : Easy

Approach:
- Traverse each sentence in the vector.
- Count the number of spaces in each sentence.
- Since words = spaces + 1, calculate the word count.
- Keep track of the maximum number of words.
- Return the maximum word count.

Time Complexity : O(n × m)
Space Complexity: O(1)

Learning:
- Learned that vector<string> is a collection of strings,
  so it should be traversed like a 2D structure
  (sentence by sentence, then character by character).
- Practiced nested traversal on strings.

Mistakes:
- Initially treated vector<string> as a single string and
  thought of counting all characters directly.
- Later understood that each element is an individual
  sentence, requiring two traversals:
  one over the vector and one over each string.
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    int mostWordsFound(vector<string> sentences)
    {
        int mainspace = 0, countspace  = 0;

        for(int i = 0;i<sentences.size();++i)
        {
            countspace = 0;
            for(int j = 0;j<sentences[i].size();++j)
            {
                if(sentences[i][j] == ' ')
                countspace++;
            }

            if(mainspace < countspace)
            mainspace = countspace;
        }

        return mainspace + 1;
    }
};

int main ()
{
    int n;
    cout << "Enter number of sentences : ";
    cin >> n;
    cin.ignore();

    vector<string> arr(n);
    for(int i = 0;i<n;++i){
        getline(cin , arr[i]);
    }

    Solution point;

    cout << point.mostWordsFound(arr) << endl;

    return 0;
}
