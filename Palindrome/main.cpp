#include <iostream>

using namespace std;

int main()
{
    int x,y,z=0,r=0;
    cout<<"Enter a Number = ";
    cin>>x;
    int c=x;
    while(x!=0)
    {

        y=x%10;
        r=r+y;
        z=10*z+y;
        x=x/10;
    }
    cout<<"Reverse = "<<z<<endl;
    if(z==c)
    {
        cout<<"The Number you Entered is a Palindrome";
    }
    else
    {
        cout<<"The Number you Entered is not a Palindrome";
    }
    cout<<"\nSum of Digits = "<<r;
    return 0;
}
