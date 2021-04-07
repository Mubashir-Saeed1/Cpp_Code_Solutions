#include <iostream>

using namespace std;

void swa(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int a,b;
    cout<<"Enter First Number = ";
    cin>>a;
    cout<<"Enter Second Number = ";
    cin>>b;
    swa(a,b);
    cout<<a<<endl<<b;
    return 0;
}
