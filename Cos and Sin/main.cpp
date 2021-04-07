#include <iostream>

using namespace std;

int power(int a, int b)
{
    int c=1;
    for(int i=b; i>0; i--)
    {
        c=c*a;
    }
    return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=power(a,b);
    cout<<c;
    return 0;
}
