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