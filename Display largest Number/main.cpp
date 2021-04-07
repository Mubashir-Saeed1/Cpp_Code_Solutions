#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"Enter 1st Number:"<<endl;
    cin>>a;
    cout<<"Enter 2nd Number:"<<endl;
    cin>>b;
    cout<<"Enter 3rd Number:"<<endl;
    cin>>c;
    if (a>b)
        {
            if (a>c)
        cout<<"1st Number is greatest"<<endl;
    }
    else if (b>c)
    {
        if (b>a)
        cout<<"2nd Number is greatest"<<endl;
    }
    else if (c>b)
    {
        if (c>a)
        cout<<"3rd Number is greatest"<<endl;
    }
    if (a==b)
    {
        if (a==c)
        cout<<"All Numbers are equal"<<endl;
    }
    else if (a==c)
    {
        cout <<"1st and 3rd Numbers are equal"<<endl;
    }
    else if (b==c)
    {
        cout <<"2nd and 3rd Numbers are equal"<<endl;
    }
    else if (a==b)
    {
        cout <<"1st and 2nd Numbers are equal"<<endl;
    }

    return 0;
}
