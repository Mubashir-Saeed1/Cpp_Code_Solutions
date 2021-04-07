 #include <iostream>

using namespace std;

int div(int a)
{
    int b,c=0;
    for(int i=1; i<a; i++)
    {
        b=a%i;
        if(b==0)
        {
            cout<<i;
            cout<<"    ";
            c=c+i;
        }
    }
    return c;
}
bool per(int a)
{
    int b;
    cout<<"Enter a Number to Check Whether it is Perfect or Not = ";
    cin>>a;
    b=div(a);
    if(b==a)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a;
    if(per(a))
        cout<<"\nThe Number You Entered is a Perfect Number";
    else
        cout<<"\nThe Number You Entered is Not a Perfect Number";
    return 0;
}
