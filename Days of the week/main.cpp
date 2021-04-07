#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter day number to check corresponding day = ";
    cin>>x;
    if (x==1)
    {
        cout<<"Monday";
    }
    else if(x==2)
    {
        cout<<"Tuesday";
    }
        else if(x==3)
    {
        cout<<"Wednesday";
    }    else if(x==4)
    {
        cout<<"Thursday";
    }    else if(x==5)
    {
        cout<<"Friday";
    }    else if(x==6)
    {
        cout<<"Saturday";
    }    else if(x==7)
    {
        cout<<"Sunday";
    }
    return 0;
}
