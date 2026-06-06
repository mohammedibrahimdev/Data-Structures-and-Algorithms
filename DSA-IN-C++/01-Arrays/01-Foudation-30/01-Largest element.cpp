// Problem: Find Largest Element
// Pattern: Traversal
// Time Complexity: O(n)
// Space Complexity: O(1)
// Alternative: *max_element(arr.begin(), arr.end())

#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int>& array) {
    if (array.empty()) return -1;

    int largest = array[0];
    for (size_t i = 1; i < array.size(); ++i) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << findLargest(array);
    return 0;
}