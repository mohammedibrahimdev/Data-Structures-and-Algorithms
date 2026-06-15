#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int firstnum = arr[0];

    for (int i = 0; i < n - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstnum;

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}