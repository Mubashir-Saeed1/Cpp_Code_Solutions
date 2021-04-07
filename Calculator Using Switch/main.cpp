#include <iostream>

using namespace std;

int main()
{
    char s;
    float x,y,a;
    cout<<"Enter 1st Number = ";
    cin>>x;
    cout<<"Enter 2nd Number = ";
    cin>>y;
    cout<<"Enter Operation = ";
    cin>>s;
    switch(s)
    {
    case '+' :
        a=x+y;
        break;
    case '-' :
        a=x-y;
        break;
    case '*' :
        a=x*y;
        break;
    case '/' :
        a=x/y;
        break;
    default :
        cout<<"Invalid Operation"<<endl;
        break;
    }
    cout<<"Answer = "<<a;
    return 0;
}
