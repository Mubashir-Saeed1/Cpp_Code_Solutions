#include <iostream>

using namespace std;
int m()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        cout<<"A is Greatest";
    }
    else if(b>a && b>c && b>d)
    {
        cout<<"B is Greatest";
    }
    else if(c>a && c>b && c>d)
    {
        cout<<"C is Greatest";
    }
    else if (d>a && d>b && d>c)
    {
        cout<<"D is greatest";
    }
    if(a<b && a<c && a<d)
    {
        cout<<"\nA is Smallest";
    }
    else if(b<a && b<c && b<d)
    {
        cout<<"\nB is Smallest";
    }
    else if (c<a && c<b && c<d)
    {
        cout<<"\nC is Smallest";
    }
    else if (d<a && d<b && d<c)
    {
        cout<<"\D is Smallest";
    }
}
int main()
{
    cout<<"Enter 4 Numbers = ";
    m();
    return 0;
}
