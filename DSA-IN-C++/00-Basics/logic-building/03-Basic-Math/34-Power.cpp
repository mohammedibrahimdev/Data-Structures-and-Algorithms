#include<iostream>
using namespace std;

int long long pow(int number , int power)
{
    long long res = 1;

    for(int i = 1;i<= power;++i)
    res = res * number;

    return res;
}
int main ()
{
    int number, power;
    cin >> number >> power;

    cout << pow(number,power) << endl;
    return 0;
}