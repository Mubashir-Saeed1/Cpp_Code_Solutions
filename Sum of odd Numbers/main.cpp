#include <iostream>

using namespace std;

int main()
{
    int x,n,p;
    cout<<"Enter the value of n = ";
    cin>>n;
    x=0;
    p=2;
    while(p<=n)
    {
        x=x+p;
        p=p+2;
    }
    cout<<x;
    return 0;
}
