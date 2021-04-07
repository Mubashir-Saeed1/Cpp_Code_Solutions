#include <iostream>

using namespace std;

int main()
{
    int x,i,y=0,z=0;
    cout<<"Enter a Number to count its Digits and Bits = ";
    cin>>x;
    i=x;
    while(i>0)
    {
        i=i/10;
        y++;
    }
    cout<<"Number of Digits in the Number you Entered are = "<<y<<endl;
    while(x>0)
    {
        x>>=1;
        z++;
    }
    cout<<"Number of Bits in the Number you Entered are = "<<z;
    return 0;
}
