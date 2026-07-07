/*
Problem      : String Compression
Platform     : LeetCode
Problem ID   : 443

Pattern      : Two Pointers (Read & Write)

Approach:
- Use a read pointer to traverse the array and count
  consecutive occurrences of each character.
- Use a write pointer to overwrite the array with the
  compressed result.
- Write the character once.
- If its frequency is greater than 1, write the count
  as individual digits.
- Return the length of the compressed array.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to use separate read and write pointers
  for in-place array modification.
- Practiced processing consecutive groups of elements.
- Learned how to convert an integer count into characters
  using to_string().

Mistakes:
- None
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int read = 0;
        int write = 0;

        while (read < n) {
            char current = chars[read];
            int count = 0;

            // Count consecutive occurrences
            while (read < n && chars[read] == current) {
                read++;
                count++;
            }

            // Write the character
            chars[write++] = current;

            // Write the count if greater than 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    Solution obj;
    int len = obj.compress(chars);

    cout << "Compressed length: " << len << "\n";
    cout << "Compressed array: ";

    for (int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }

    cout << endl;

    return 0;
}