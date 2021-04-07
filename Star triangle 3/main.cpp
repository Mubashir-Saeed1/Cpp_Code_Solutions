#include <iostream>

using namespace std;

int main()
{
    int w,x,y,z;
    cout<<"Enter number of Rows = ";
    cin >>x;
    for(y=1; y<=x; y++)
    {
        for(z=x; z>=y; z--)
        {
            cout<<" ";
        }
        for(w=1; w<=(2*y)-1; w++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
