#include <iostream>

using namespace std;

int main()
{
    int m,y,a=0;
    for(y=1;y<=10;y++)
    {
        cout<<"Enter Marks of the Subject "<<y<<" = ";
        cin>>m;
        a=a+m;
    }
    cout<<"Average = "<<a/10;

    return 0;
}
