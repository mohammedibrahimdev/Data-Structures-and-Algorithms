#include<iostream>
using namespace std;

int main ()
{
    int n, armstrong = 0, digit, copy;
    cin >> n;
    copy = n;

    while(n > 0)
    {
        digit = n%10;
        for(int i = 1;i<=3;++i)
        digit *= i;
        armstrong += digit;
        n = n/10;
    }

    if(armstrong == copy)
    cout << "Armstrong Number" << endl;
    else
    cout << " Not Armstrong Number" << endl;

    return 0;
}