#include <iostream>

using namespace std;

int main()
{
    int a,x=1,b=0;
    cout<<"Enter the Value of N = ";
    cin>>a;
    while(x<=a)
    {
        if(x%2!=0)
        {
            b=b+x;
        }
        x++;
    }
    cout<<b;
    return 0;
}
