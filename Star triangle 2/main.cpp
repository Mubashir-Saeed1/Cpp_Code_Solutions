#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter number of rows = ";
    cin>>x;
    for(y=x; y>=1; y--)
    {
        for(z=1; z<=y; z++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
