#include <iostream>

using namespace std;

int main()
{
    int x,i=1,l=0;
    do
    {
        cout<<"Enter Integer No. 0"<<i++<<" = ";
        cin>>x;
        if(x>l)
            l=x;
    }
    while(i<=5);
    cout<<"Largest Number you entered is = "<<l;
    return 0;
}
