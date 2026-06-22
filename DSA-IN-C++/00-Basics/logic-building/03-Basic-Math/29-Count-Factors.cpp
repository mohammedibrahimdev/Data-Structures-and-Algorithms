#include<iostream>
using namespace std;
int main ()
{
    int number, count = 0;
    cin >> number;

    for(int i = 1;i<=number;++i)
    {
        if(number%i == 0)
        count++;

    }

    cout << count << endl;
    return 0;

}