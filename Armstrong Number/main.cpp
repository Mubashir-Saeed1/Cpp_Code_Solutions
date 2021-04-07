#include <iostream>

using namespace std;

int main()
{
    int x,u,t,h;
    cout<<"Enter a 3 Digit Number = ";
    cin>>x;
    h=x/100;
    u=x%10;
    t=(x%100)/10;
    if(h*h*h+u*u*u+t*t*t==x)
    {
        cout<<"The Number you Entered is an Armstrong Number ";
    }
    else
    {
        cout<<"The Number you Entered is not an Armstrong Number ";
    }
    return 0;
}
