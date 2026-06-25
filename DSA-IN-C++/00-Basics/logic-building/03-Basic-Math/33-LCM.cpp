#include<iostream>
using namespace std;
int main ()
{
    int a , b, LCM = 0;
    cin >> a >> b;
    int ac = a, bc = b;

    while(min(a , b) > 0)
    {
        int temp = min(a, b);
        b = max(a , b)%min(a, b);
        a = temp;
    }
    // LCM formula
    LCM = (ac * bc)/max(a,  b);
    cout << LCM << endl;
    
    return 0;
}