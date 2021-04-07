#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c=1;
    cout<<a<<endl<<b<<endl;
    while(a+b<=200)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    return 0;
}
