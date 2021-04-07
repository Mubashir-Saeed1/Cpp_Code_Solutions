#include <iostream>

using namespace std;

int main()
{
    int x,y,a;
    cout<<"Enter two Numbers to Find their L.C.M and H.C.F = ";
    cin>>x;
    cout<<"Enter 2nd Number = ";
    cin>>y;
    a=x*y;
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
    cout<<"H.C.F = "<<x<<endl;
    cout<<"L.C.M = "<<a/y;
    return 0;
}
