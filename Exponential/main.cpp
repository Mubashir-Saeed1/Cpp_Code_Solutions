#include <iostream>

using namespace std;

int main()
{
    int x,y,z,t=1;
    cout<<"Enter Base = ";
    cin >>x;
    cout<<"Enter Power = ";
    cin>>y;
    for (z=1; z<=y; z++)
    {
        t=t*x;
    }
    cout<<x<<"^"<<y<<" = "<<t;
    return 0;
}
