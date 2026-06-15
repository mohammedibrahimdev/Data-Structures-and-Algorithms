#include<iostream>
using namespace std;
int main ()
{
    int n, m = 0;
    cin >> n;
    for(int j = 0;j<n;++j){
    for(int i = 0;i<n - m;++i)
    {
        cout << "*";
        m++;
    }
    cout << endl;
    }

    return 0;

}