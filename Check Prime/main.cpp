#include <iostream>

using namespace std;
void m(int a)
{
    int b,c,d,l=0;
    d=a-1;
    for (b=d; b>1; b--)
    {
        c=a%b;
        if(c==0)
        {
			l=1;
        }
    }
    if(l==1)
    cout<<"The Number You Entered is not a Prime Number"<<endl;
    else
	cout<<"The Number you Entered is a Prime Number";
}
int main()
{
    int a;
    cout<<"Enter a Number to Check Whether it's a Prime or Not = ";
    cin>>a;
    if (a>1000)
    {
        cout<<"The Number you Entered is out of Range";
        return 0;
    }
    m(a);
    return 0;
}
