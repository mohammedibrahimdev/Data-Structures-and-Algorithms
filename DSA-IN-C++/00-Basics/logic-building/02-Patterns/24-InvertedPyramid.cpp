#include<iostream>
using namespace std;
int main ()
{
    int n, m = 1;
    cin >> n;

    for(int row = 1;row <= n;++row)
    {
        for(int space = 1;space <row;++space)
        cout << " ";

        for(int start = 1;start <= n*2 - m;++start)
        cout << "*";

      
        cout << endl;
        m += 2;
    }

    return 0;
}