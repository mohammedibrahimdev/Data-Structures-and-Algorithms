#include<iostream>
using namespace std;
int main ()
{
    int n, sum = 0;
    cin >> n;
    while(n>=1){
        sum += n;
        n--;
    }

    cout << "The sum is : "<< sum << endl;
    return 0;
}