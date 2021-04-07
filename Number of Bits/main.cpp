#include <iostream>

using namespace std;

void bit(int a)
{
    int b=0;
    while (a!=0)
    {
        a>>=1;
        b++;
    }
    cout<<b;
}
int main()
{
    int x;
    cout<<"Enter a Number to Count its Bits = ";
    cin>>x;
    bit(x);
    return 0;
}
